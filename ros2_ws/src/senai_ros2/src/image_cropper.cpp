#include "senai_ros2/image_cropper.hpp"

ImageCropper::ImageCropper() : Node("image_cropper")
{
    // Creating subscription
    topic_name = "random_numbers";
    buffer = 10;

    subscription_ = this->create_subscription<sensor_interface::msg::Nums>(topic_name, buffer, std::bind(&ImageCropper::random_numbers_callback, this, std::placeholders::_1));

    // Setting & getting initial parameters
    this->declare_parameter("image_path", "");
    this->declare_parameter("output_path", "");
}

void ImageCropper::sendCropped(const std::shared_ptr<sensor_interface::srv::SendImage::Request> request, std::shared_ptr<sensor_interface::srv::SendImage::Response> response)
{
    (void)request; // Avoid unused parameter warning from colcon
    cv::Mat croppedImage = cv::imread(output_path_);

    if (croppedImage.empty())
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Could not open or find the image");
        return;
    }

    // Converting image to msg with cv_bridge.
    try
    {
        msg_ = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", croppedImage).toImageMsg();
    }
    catch (cv_bridge::Exception &e)
    {
        RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
        return;
    }

    response->cropped = *msg_.get();
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Processed image sent through send_image service.");
}

void ImageCropper::validate_parameters()
{
    this->get_parameter("image_path", image_path_);
    this->get_parameter("output_path", output_path_);
    default_image_path = "senai_ros2/images/img.jpg";
    default_output_path = "senai_ros2/images/img_cropped.jpg";

    if (!fs::exists(image_path_))
    {
        RCLCPP_WARN(this->get_logger(), "Image_path doesn't exist. Setting default value...");
        std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("image_path",default_image_path)};

        this->set_parameters(all_new_parameters);
        this->get_parameter("image_path", image_path_);
    }

    if(!fs::exists(output_path_))
    {
        RCLCPP_WARN(this->get_logger(), "Output_path doesn't exist. Setting default value...");
        std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("output_path",default_output_path)};

        this->set_parameters(all_new_parameters);
        this->get_parameter("image_path", output_path_);
    }

}

void ImageCropper::random_numbers_callback(const sensor_interface::msg::Nums::SharedPtr msg)
{
    validate_parameters();

    RCLCPP_INFO(this->get_logger(), "Received random numbers: %.2f, %.2f", msg->random_num1, msg->random_num2);

    cv::Mat img = cv::imread(image_path_);
    if (img.empty())
    {
        RCLCPP_ERROR(this->get_logger(), "(img.empty)Could not open or find the image. Verify the image directory or file...");
    }
    
    cropImage(img, msg->random_num1, msg->random_num2);
}

void ImageCropper::cropImage(const cv::Mat &img, double percentage_W, double percentage_H)
{
    validate_parameters();

    // Calculate the dimensions of the cropping
    cropWidth = static_cast<int>(img.cols * percentage_W);
    cropHeight = static_cast<int>(img.rows * percentage_H);

    // Calculate the start point of the cropping for centering it
    startX = (img.cols - cropWidth) / 2;
    startY = (img.rows - cropHeight) / 2;

    // Create a rectangle for the cropping, using the calculated data
    cv::Rect roi(startX, startY, cropWidth, cropHeight);
    cv::Mat croppedImage = img(roi);

    output_file_name = "img_cropped.jpg";
    // Save the cropped image into the output_path
    output_path_ += output_file_name; 
    cv::imwrite(output_path_, croppedImage);
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto image_cropper_node = std::make_shared<ImageCropper>();
    
    rclcpp::Service<sensor_interface::srv::SendImage>::SharedPtr service = image_cropper_node->create_service<sensor_interface::srv::SendImage>("send_image", std::bind(&ImageCropper::sendCropped, image_cropper_node, std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(image_cropper_node->get_logger(), "Ready to crop images!");
    
    rclcpp::spin(image_cropper_node);
    rclcpp::shutdown();
    
    return 0;
}
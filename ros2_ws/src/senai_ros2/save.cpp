#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include <random>
#include "sensor_interface/srv/send_image.hpp"
#include "cv_bridge/cv_bridge.h"
#include "sensor_msgs/msg/image.hpp"
#include <opencv2/imgcodecs.hpp>
#include "sensor_interface/msg/nums.hpp"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;
using namespace std::chrono_literals;

class ImageReceiver : public rclcpp::Node {
public:
    ImageReceiver() : Node("image_receiver"), requests_made_(0) {
        //declaring parameters
        this->declare_parameter("save_directory", "");
        this->declare_parameter("requests_amount", 5);
        //creating publisher with a custom msg "Nums"
        publisher_ = this->create_publisher<sensor_interface::msg::Nums>("random_numbers", 10);
        timer_ = this->create_wall_timer(5s, std::bind(&ImageReceiver::timer_callback, this));
        client_ = this->create_client<sensor_interface::srv::SendImage>("send_image");
        request_timer_ = this->create_wall_timer(10s, std::bind(&ImageReceiver::request_callback, this));
        // The client callback and publisher callback have different timing to demonstrate that only the last cropped image is being sent through the service.
    }

private:
    void validate_parameters() {
        //validate_parameters is to make sure that any wrong parameters input will stop the code. I'ts a recovery method in case of fails.
        if (!fs::exists(save_directory_)) {
            RCLCPP_WARN(this->get_logger(), "Invalid saving_directory. Setting default value...");
            std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("save_directory", "senai_ros2/images/")};
            this->set_parameters(all_new_parameters);
            this->get_parameter("save_directory", save_directory_); 

        }
        if(requests_amount_ < requests_made_){
            RCLCPP_WARN(this->get_logger(), "Invalid parameter. Request_amount parameter smaller than requests_made! Setting +1 request.");
            std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("requests_amount", requests_made_ + 1)};
            this->set_parameters(all_new_parameters);
            this->get_parameter("requests_amount", requests_amount_); 
        }
        if (requests_amount_ <= 0) {
            RCLCPP_WARN(this->get_logger(), "Request amount cannot be zero or less. Setting default value...");
            std::vector<rclcpp::Parameter> all_new_parameters{rclcpp::Parameter("requests_amount", 5)};
            this->set_parameters(all_new_parameters);
            this->get_parameter("requests_amount", requests_amount_);
        }
    }
    void timer_callback() {
        //generating 2 float random numbers between 0.0 and 1.0
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dis(0.0, 1.0);
        double num1 = dis(gen);
        double num2 = dis(gen);

        //publishing the custom msg
        auto message = sensor_interface::msg::Nums();
        RCLCPP_INFO(this->get_logger(),"Random numbers: %.2f, %.2f", num1, num2);
        message.num1 = num1;
        message.num2 = num2;
        publisher_->publish(message);
           
    }

    void request_callback() {
        //getting parameters and validating parameters
        this->get_parameter("requests_amount", requests_amount_);
        this->get_parameter("save_directory", save_directory_);
        validate_parameters();
        if (!client_->wait_for_service(1s)) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
        } else {
            auto request = std::make_shared<sensor_interface::srv::SendImage::Request>();
            auto future_result = client_->async_send_request(request, std::bind(&ImageReceiver::handle_response, this, std::placeholders::_1));
        }
    }

    void handle_response(rclcpp::Client<sensor_interface::srv::SendImage>::SharedFuture future) {   
        auto response = future.get();
        cv_bridge::CvImagePtr cv_ptr;
        try {
            //converting image received thourgh server with cv_bridge.
            cv_ptr = cv_bridge::toCvCopy(response->cropped, "bgr8");
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
            return;
        }

        std::string file_name = std::to_string(++requests_made_) + "_img_croppedServer.jpg";
        std::string image_path = save_directory_ + file_name;
        cv::imwrite(image_path, cv_ptr->image);
        RCLCPP_INFO(this->get_logger(), "Image saved at: %s", image_path.c_str());
        //checking the amount of requests made
            if(requests_made_ == requests_amount_){
                RCLCPP_INFO(this->get_logger(), "Number of requests completed. Start again for new crops");
                rclcpp::shutdown();//Stop immediately the client Node due to amount of requisitions.
            }
    }   
rclcpp::Publisher<sensor_interface::msg::Nums>::SharedPtr publisher_;
rclcpp::TimerBase::SharedPtr timer_;
rclcpp::TimerBase::SharedPtr request_timer_;
rclcpp::Client<sensor_interface::srv::SendImage>::SharedPtr client_;
std::string save_directory_;
int requests_made_; 
int requests_amount_; 
}
int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageReceiver>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
#ifndef IMAGE_CROPPER_HPP
#define IMAGE_CROPPER_HPP

#include <memory>
#include <functional>
#include <string>
#include <opencv2/opencv.hpp>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <cv_bridge/cv_bridge.h>
#include "sensor_msgs/msg/image.hpp"
#include "sensor_interface/srv/send_image.hpp"
#include "sensor_interface/msg/nums.hpp"
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;
using std::placeholders::_1;
using namespace std::chrono_literals;
using namespace cv;

class ImageCropper : public rclcpp::Node {
public:
    ImageCropper();
    void sendCropped(const std::shared_ptr<sensor_interface::srv::SendImage::Request> request, std::shared_ptr<sensor_interface::srv::SendImage::Response> response);

private:
    void validate_parameters();
    void random_numbers_callback(const sensor_interface::msg::Nums::SharedPtr msg);
    void cropImage(const cv::Mat& img, double percentage_W, double percentage_H);

    rclcpp::Subscription<sensor_interface::msg::Nums>::SharedPtr subscription_;
    std::string image_path_, output_path_, default_image_path, default_output_path, topic_name, output_file_name;
    int cropWidth, cropHeight, startX, startY, buffer;
    double random_num1, random_num2;
    sensor_msgs::msg::Image::SharedPtr msg_;
};

#endif // IMAGE_CROPPER_HPP

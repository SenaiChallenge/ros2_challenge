#ifndef IMAGE_RECEIVER_HPP
#define IMAGE_RECEIVER_HPP

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
    ImageReceiver();

private:
    void validate_parameters();
    void timer_callback();
    void request_callback();
    void handle_response(rclcpp::Client<sensor_interface::srv::SendImage>::SharedFuture future);
    
    rclcpp::Publisher<sensor_interface::msg::Nums>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_, request_timer_;
    rclcpp::Client<sensor_interface::srv::SendImage>::SharedPtr client_;
    std::string save_directory_, file_name, image_path, topic_name;
    int requests_made_, requests_amount_, buffer;
};

#endif // IMAGE_RECEIVER_HPP

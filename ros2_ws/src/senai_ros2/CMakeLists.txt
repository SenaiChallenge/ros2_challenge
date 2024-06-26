cmake_minimum_required(VERSION 3.8)
project(senai_ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(OpenCV REQUIRED)
find_package(sensor_interface REQUIRED)  

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

# for cropper 
add_executable(cropper src/image_cropper.cpp)
ament_target_dependencies(cropper rclcpp std_msgs sensor_msgs OpenCV  sensor_interface cv_bridge)  

# for receiver 
add_executable(receiver src/image_receiver.cpp)
ament_target_dependencies(receiver rclcpp std_msgs sensor_msgs OpenCV  sensor_interface cv_bridge)

install(TARGETS
   cropper
   receiver
   DESTINATION lib/${PROJECT_NAME}
 )

 install(
  DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

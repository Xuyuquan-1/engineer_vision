cmake_minimum_required(VERSION 3.8)
project(camera_display)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# 提供cmake对ros2的支持
find_package(ament_cmake REQUIRED)
find_package(OpenCV REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(rcutils REQUIRED)
find_package(image_transport REQUIRED)
find_package(cv_bridge REQUIRED)


# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${rclcpp_INCLUDE_DIRS})
include_directories(${std_msgs_INCLUDE_DIRS})
include_directories(${rcl_interfaces_INCLUDE_DIRS})
include_directories(${image_transport_INCLUDE_DIRS})
include_directories(${cv_bridge_INCLUDE_DIRS})



add_executable(camera_display src/camera_display.cpp)

ament_target_dependencies(camera_display rclcpp rcutils image_transport cv_bridge)


target_link_libraries(camera_display ${OpenCV_LIBS})
target_link_libraries(camera_display ${rclcpp_LIBS})
target_link_libraries(camera_display ${std_msgs_LIBS})
target_link_libraries(camera_display ${rcl_interfaces_LIBS})
target_link_libraries(camera_display ${image_transport_LIBS})
target_link_libraries(camera_display ${cv_bridge_LIBS})


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

#install
install(
    TARGETS camera_display
    DESTINATION lib/${PROJECT_NAME}
    )

ament_package()

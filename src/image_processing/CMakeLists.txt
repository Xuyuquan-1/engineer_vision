cmake_minimum_required(VERSION 3.8)
project(image_processing)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(OpenCV 4 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rcutils REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rcl_interfaces REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${rclcpp_INCLUDE_DIRS})
include_directories(${std_msgs_INCLUDE_DIRS})
include_directories(${rcl_interfaces_INCLUDE_DIRS})
include_directories(${rcutils_INCLUDE_DIRS})

# include_directories(/home/xyq/Desktop/ros_ws/src/image_processing/sources)

# add_executable(image_processing src/bgr2gray.cpp)
add_executable(image_processing src/image_info.cpp)
# ament_target_dependencies()

target_link_libraries(image_processing ${OpenCV_LIBS})
target_link_libraries(image_processing ${rclcpp_LIBS})
target_link_libraries(image_processing ${std_msgs_LIBS})
target_link_libraries(image_processing ${rcl_interfaces_LIBS})
target_link_libraries(image_processing ${rcutils_LIBS})


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

install(
    TARGETS image_processing
    DESTINATION lib/${PROJECT_NAME}
    )

ament_package()

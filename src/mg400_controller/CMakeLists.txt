cmake_minimum_required(VERSION 3.5)
project(mg400_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find the necessary ros2_control and controller packages
find_package(ament_cmake            REQUIRED)
find_package(controller_manager     REQUIRED)
find_package(ros2_control           REQUIRED)
find_package(joint_state_broadcaster REQUIRED)
find_package(joint_trajectory_controller REQUIRED)
find_package(hardware_interface     REQUIRED)
find_package(controller_interface   REQUIRED)

# Install the controller YAML at share/mg400_controller/mg400_controllers.yaml
install(
  DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

ament_export_dependencies(
  controller_manager
  ros2_control
  joint_state_broadcaster
  joint_trajectory_controller
  hardware_interface
  controller_interface
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
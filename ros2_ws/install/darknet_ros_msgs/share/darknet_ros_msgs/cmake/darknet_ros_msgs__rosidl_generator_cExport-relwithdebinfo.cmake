#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELWITHDEBINFO".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "darknet_ros_msgs::darknet_ros_msgs__rosidl_generator_c" for configuration "RELWITHDEBINFO"
set_property(TARGET darknet_ros_msgs::darknet_ros_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(darknet_ros_msgs::darknet_ros_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libdarknet_ros_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libdarknet_ros_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS darknet_ros_msgs::darknet_ros_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_darknet_ros_msgs::darknet_ros_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libdarknet_ros_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

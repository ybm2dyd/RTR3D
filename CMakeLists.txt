cmake_minimum_required (VERSION 3.1)
set (CMAKE_C_STANDARD_11)
set (CMAKE_CXX_STANDARD_11)
project (RTR3DEngine)
include_directories("${PROJECT_SOURCE_DIR}/Framework/Interface")
include_directories("${PROJECT_SOURCE_DIR}/Framework/Common")
add_subdirectory(Framework)
add_subdirectory(Empty)


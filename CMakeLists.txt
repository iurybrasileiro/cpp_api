cmake_minimum_required(VERSION 3.15)
project(cpp_api)

find_package(httplib REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} httplib::httplib)

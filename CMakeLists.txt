cmake_minimum_required(VERSION 3.15)
project(cpp_api)

add_executable(${PROJECT_NAME} src/main.cpp)

find_package(httplib REQUIRED)
find_package(nlohmann_json REQUIRED)

target_link_libraries(${PROJECT_NAME} httplib::httplib)
target_link_libraries(${PROJECT_NAME} nlohmann_json::nlohmann_json)

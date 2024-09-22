cmake_minimum_required(VERSION 3.15)

project(
    snake-cpp
    VERSION 1.0
    LANGUAGES CXX
)

add_subdirectory(cpp-terminal)

add_executable(snake snake/main.cpp)
target_link_libraries(snake cpp-terminal)

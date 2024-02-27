cmake_minimum_required(VERSION 3.16.0)

project(competitive_programming)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB cpp_files CONFIGURE_DEPENDS "*.cpp")

foreach(file ${cpp_files})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach()

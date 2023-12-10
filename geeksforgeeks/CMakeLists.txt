cmake_minimum_required(VERSION 3.0.0)

project(geeksforgeeks)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB cpp_files "*.cpp")

foreach(file ${cpp_files})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach()

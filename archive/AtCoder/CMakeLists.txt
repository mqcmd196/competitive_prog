cmake_minimum_required(VERSION 3.0.0)

project(algorithms)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB cpp_files "*/*.cpp")

foreach(file ${cpp_files})
    get_filename_component(dir ${file} DIRECTORY)
    get_filename_component(name ${file} NAME_WE)
    string(REPLACE "/" ";" dir_list ${dir})
    list(GET dir_list -1 subdir_name)
    set(target_name ${subdir_name}_${name})
    add_executable(${target_name} ${file})
endforeach()

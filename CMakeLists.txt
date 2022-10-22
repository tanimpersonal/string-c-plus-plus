cmake_minimum_required(VERSION 3.23)
project(string)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(string
        .idea/.gitignore
        .idea/modules.xml
        .idea/string.iml
        .idea/workspace.xml
        intro.cpp)

add_executable(intro intro.cpp)
add_executable(iterator iterator.cpp)
add_executable(string-size string-size.cpp)
add_executable(string-element-access string-element-access.cpp)
add_executable(string-modifiers string-modifiers.cpp)
add_executable(string-operations string-operations.cpp)
add_executable(string-stream string-stream.cpp)
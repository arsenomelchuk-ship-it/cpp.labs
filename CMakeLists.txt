cmake_minimum_required(VERSION 3.10)
project(HelloWorld CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(lab1 src/lab1.cpp src/smail.cpp)


add_executable(lab2 src/lab2.cpp)
target_link_libraries(lab2 ncurses)


add_executable(pyramid src/lab3.cpp)
target_link_libraries(pyramid ncurses)


cmake_minimum_required(VERSION 3.0)

set(EXECUTABLE_NAME main)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(${EXECUTABLE_NAME} main.cpp printOut.cpp)
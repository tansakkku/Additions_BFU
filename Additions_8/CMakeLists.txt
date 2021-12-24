cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME add_8)
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${PROJECT_NAME}" add_8.cpp
					inc/Header.hpp

					src/Source.cpp

					
)


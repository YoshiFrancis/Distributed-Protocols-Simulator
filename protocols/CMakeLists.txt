cmake_minimum_required(VERSION 3.29) 
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_STANDARD 20)
project(Distributed_Simulator 
				VERSION 3.29
				LANGUAGES CXX
)

include_directories(include)

add_subdirectory(src)
add_executable(main main.cpp)
target_link_libraries(main PUBLIC graph)

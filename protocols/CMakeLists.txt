cmake_minimum_required(VERSION 3.29) 
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_STANDARD 20)
project(Distributed_Simulator 
				VERSION 3.29
				LANGUAGES CXX
)

include_directories(include)

add_subdirectory(src)
# add_subdirectory(tests)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC graph)


# include(FetchContent)
# FetchContent_Declare(Catch2
#     GIT_REPOSITORY https://github.com/catchorg/Catch2.git
#     GIT_TAG        v3.4.0
# )
# FetchContent_MakeAvailable(Catch2)
#
# target_link_libraries(graph_test PUBLIC graph)
# target_link_libraries(stp_test PUBLIC graph)
#
# enable_testing()
#
# add_test(NAME graph_tests COMMAND graph_test)
# add_test(NAME graph_tests COMMAND stp_test)

cmake_minimum_required(VERSION 3.29)

# Fetching Catch2 for unit testing
include(FetchContent)
FetchContent_Declare(Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.4.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(graph_test graph_test.cpp)
target_link_libraries(graph_test PRIVATE Catch2::Catch2WithMain)

add_executable(stp_test stp_test.cpp)
target_link_libraries(stp_test PRIVATE Catch2::Catch2WithMain)


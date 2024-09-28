add_library(graph STATIC edge.cpp graph.cpp node.cpp)
target_include_directories(graph PUBLIC ${PROJECT_SOURCE_DIR/include})

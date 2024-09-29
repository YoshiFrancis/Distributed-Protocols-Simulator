#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <sstream>
#include "graph.hpp"
#include "stp.hpp"


TEST_CASE(" Can construct graph ", "[Graph]") {
  

  STP stpProto;
  std::stringstream listener;
  int nodeCount = 5;
  Graph graph(stpProto.clone(), listener, nodeCount);
}

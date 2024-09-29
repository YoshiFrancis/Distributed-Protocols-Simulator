#include <iostream>
#include <sstream>
#include "graph.hpp"
#include "src/stp/stp.hpp"



int main(int argc, char* argv[]) {

  STP stp;
  std::stringstream listener;
  int nodeCount = 5;
  Graph graph(stp.clone(), listener, nodeCount);
  std::cout << "Created graph\n";
  std::cout << graph.getStateOfAll() << "\n";
  graph.runToEnd();
  std::cout << graph.getStateOfAll() << "\n";

	std::cout << "hello World\n";
	return 0;

}

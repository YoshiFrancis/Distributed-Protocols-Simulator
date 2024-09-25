#include "Graph.cpp"
#include <sstream>

int main(int argc, char* argv[]) {
	

  // settup listener socket for external connections (connection from UI)
  int listenfd;
  int connfd;
	stringstream listener;

  while (true) {
    // ... implemenet
    accept(connfd, listenfd);

    //...

    Graph graph(protocol, listener, nodeCount);
    if (message == "next") {
      graph.next();
    } else if (message == "end") {
      graph.runToEnd();
    }
    std::string simulationString;
    simulationString << listener;
    connfd.send(simulationString);
  }



}

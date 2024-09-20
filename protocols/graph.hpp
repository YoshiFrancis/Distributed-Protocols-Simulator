#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <sstream>
#include "protocol.hpp"
#include "node.hpp"
// will be an interface as well in case other graphs will be made for other configurations
class Graph 
{
  private:
    Protocol _protocol;
    Listener& _lstream;
    int _nodeCount;

  public:
    Graph(Protocol protocol, std::istringstream lstream, int nodeCount);
    virtual ~Graph();
    void next(); // go to next round of iterations
    bool runToEnd(); // finish protocol until it stabilizes, returns false if never does (after 100 iterations)

  private:
    void makeGraph(Protocol protocol, Listener& lstream, int nodeCount);

};


#endif // !GRAPH_HPP_


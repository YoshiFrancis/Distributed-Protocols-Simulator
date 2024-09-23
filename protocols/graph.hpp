#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <istream>
#include "protocol.hpp"
#include "node.hpp"
// will be an interface as well in case other graphs will be made for other configurations
class Graph 
{
  private:
    Protocol _protocol;
    Listener& _lstream;
    std::vector<Node> _nodes;
    std::vector<std::stringstream> _streams;
    int _nodeCount;

  public:
    Graph(Protocol protocol, std::istream& lstream, int nodeCount);
    virtual ~Graph();
    void next(); // go to next round of iterations
    bool runToEnd(); // finish protocol until it stabilizes, returns false if never does (after 100 iterations)
};


#endif // !GRAPH_HPP_


#ifndef GRAPH_HPP_
#define GRAPH_HPP_

#include <istream>
#include "protocol.hpp"
#include "node.hpp"
// will be an interface as well in case other graphs will be made for other configurations
class Graph 
{
  private:
    Protocol* _protocol;
    std::ostream& _lstream;
    std::vector<Node> _nodes;
    std::vector<std::stringstream> _streams;
    int _nodeCount;

  public:
    Graph(Protocol* protocol, std::ostream& lstream, int nodeCount);
    virtual ~Graph();
    bool next(); // go to next round of iterations; returns false when no broadcasts were made
    void runToEnd(); // finish protocol until it stabilizes, returns false if never does (after 100 iterations)
    std::string getStateOfAll() const;
    std::string getEdges() const;
};


#endif // !GRAPH_HPP_


#ifndef NODE_HPP_
#define NODE_HPP_

#include <stringstream>
#include "neighbor.hpp"
#include "protocol.hpp"

class Node
{
private:
  std::istream& _lstream; // input string stream to listener stream
  std::vector<Edge> _neighborsTo;
  std::vector<Edge> _neighborsFrom;
  Protocol _proto;
  int _id;

public:
  Node(std::istream& lstream, Protocol proto, int id);
  virtual ~Node();
  void addEdge(Edge edge, bool to);
  perform();

private:
  std::string read();
  void write(std::string message, int id);

};



#endif

#ifndef NODE_HPP_
#define NODE_HPP_

#include <iostream>
#include "edge.hpp"
#include "protocol.hpp"

class Node
{
private:
  std::ostream& _lstream; // input string stream to listener stream
  std::vector<Edge> _neighborsTo;
  std::vector<Edge> _neighborsFrom;
  Protocol* _proto;
  int _id;

public:
  Node(std::ostream& lstream, Protocol* proto, int id);
  virtual ~Node();
  void addEdge(Edge edge, bool to);
  void perform();

private:
  std::string read();
  void write(const std::string& message, int id);

};



#endif

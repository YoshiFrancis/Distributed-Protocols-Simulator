#ifndef NODE_HPP_
#define NODE_HPP_

#include <stringstream>
#include "neighbor.hpp"
#include "protocol.hpp"

class Node
{
private:
  std::istringstream& _lstream; // input string stream to listener stream
  std::vector<Neighbor> _neighborsTo;
  std::vector<Neighbor> _neighborsFrom;
  Protocol _proto;
  int _id;

public:
  Node(std::istringstream& lstream, const std::vector<Neighbor>& neighborsTo, const std::vector<Neighbor>& neighborsFrom, Protocol proto, int id);
  virtual ~Node();
  perform();

private:
  std::string read();
  void write(std::string message);

};



#endif

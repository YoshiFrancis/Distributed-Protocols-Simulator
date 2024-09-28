#include "node.hpp"

#define BROADCAST 0

Node::Node(std::ostream& lstream, Protocol* proto, int id) :
  _lstream(lstream), _proto(proto), _id(id)
{

}

Node::~Node() {

}

void Node::addEdge(Edge edge, bool to) {
  if (to) {
    _neighborsTo.push_back(edge);
  } else {
    _neighborsFrom.push_back(edge);
  }
}

void Node::perform() {
  std::string message;
  for (; message != ""; message = read()) {
    _proto->input(message);
  }
  std::string reply = _proto->reply();
  write(reply, BROADCAST);
}

std::string Node::read() {
  std::string message;
  for (auto& edge : _neighborsFrom) {
    message = edge.read();
    if (message.length() > 0)
      break;
  }
  return message;
}

void Node::write(const std::string& message, int id) {
  if (id == BROADCAST) {
    for (auto& edge : _neighborsTo) {
      edge.write(message);
    }
  } else {
    for (auto& edge : _neighborsTo) {
      if (edge.getId() == id) {
        edge.write(message);
        break;
      }
    }
  }
}

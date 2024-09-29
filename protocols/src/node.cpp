#include "node.hpp"

#define BROADCAST 0

Node::Node(std::ostream& lstream, Protocol* proto, int id) :
  _lstream(lstream), _proto(proto), _id(id)
{
  _proto->init(id, {});

}

Node::~Node() {

}

void Node::broadcastControlMessage() const {
  std::string broadcast = _proto->reply();
  write(broadcast, BROADCAST);
}

void Node::addEdge(const Edge& edge, bool to) {
  if (to) {
    _neighborsTo.push_back(edge);
  } else {
    _neighborsFrom.push_back(edge);
  }
  _proto->setMap(edge.getId(), edge.getWeight());
}

bool Node::readBuffer() {
  std::string message = read();
  if (message == "")
      return false;
  for (; message != ""; message = read()) {
    _proto->input(message);
  }
  return true;
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

void Node::write(const std::string& message, int id) const {
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

std::string Node::getState() const {
  return _proto->getState();
}

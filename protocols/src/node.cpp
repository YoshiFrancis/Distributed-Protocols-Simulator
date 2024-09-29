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
  std::cout << "broadcasting " << broadcast << "\n";
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
  std::vector<std::string> messages = read();
  if (messages.size() == 0)
      return false;
  for (std::string message : messages) {
    _proto->input(message);
  }
  return true;
}

std::vector<std::string> Node::read() {
  std::vector<std::string> messages;
  for (auto& edge : _neighborsFrom) {
    std::string message = edge.read();
    if (message.length() > 0)
      messages.push_back(message);
  }
  return messages;
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

const std::vector<Edge>& Node::getEdges() const {
  return _neighborsTo;
}

int Node::getId() const {
  return _id;
}

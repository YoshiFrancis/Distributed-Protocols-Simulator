#include "edge.hpp"

Edge::Edge(std::istream& istream, std::ostream& ostream, int weight, int id) :
  _istream(istream), _ostream(ostream), _weight(weight), _id(id)
{}

void Edge::write(const std::string& message) {
  _istream << message << " ";
}

std::string Edge::read() {
  std::string message;
  if (_stream.peek() != std::char_traits<wchar_t>::eof())
    message << _ostream;
  return message;
}

int Edge::getWeight() const {
  return _weight;
}

int Edge::getId() const {
  return _id;
}


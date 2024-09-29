#include "edge.hpp"
#include <iostream>

Edge::Edge(std::istream& istream, std::ostream& ostream, int weight, int id) :
  _istream(istream), _ostream(ostream), _weight(weight), _id(id)
{}

Edge::~Edge() {}

void Edge::write(std::string message) const {
  _ostream << message << "\n";
}

std::string Edge::read() {
  std::string message;
  if (_istream.peek() != std::char_traits<wchar_t>::eof())
    _istream >> message;
  return message;
}

int Edge::getWeight() const {
  return _weight;
}

int Edge::getId() const {
  return _id;
}


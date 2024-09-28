#ifndef PROTOCOL_HPP_
#define PROTOCOL_HPP_

#include <string>
#include <unordered_map>

class Protocol {
protected:
  int _id;
  std::unordered_map<int, int> _map;
public:
  Protocol(int id, std::unordered_map<int, int> map);
  virtual bool input(const std::string& message) = 0;
  virtual std::string reply() const = 0;
  virtual void setMap(int key, int value) = 0;
};

Protocol::Protocol(int id, std::unordered_map<int, int> map) :
  _id(id), _map(map)
{}

#endif // !PROTOCOL_HPP_

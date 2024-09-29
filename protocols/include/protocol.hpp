#ifndef PROTOCOL_HPP_
#define PROTOCOL_HPP_

#include <string>
#include <unordered_map>

class Protocol {
public:
  inline virtual ~Protocol() {};
  virtual void init(int id, std::unordered_map<int, int> map) = 0;
  virtual bool input(const std::string& message) = 0;
  virtual std::string reply() const = 0;
  virtual void setMap(int key, int value) = 0;
  virtual Protocol* clone() = 0;
};

#endif // !PROTOCOL_HPP_

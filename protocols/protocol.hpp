#ifndef PROTOCOL_HPP_
#define PROTOCOL_HPP_

class Protocol {
public:
  Protocol(int id);
  virtual void input(const std::string& message) = 0;
  virtual std::string reply() const = 0;
};

#endif // !PROTOCOL_HPP_

#ifndef STP_HPP_
#define STP_HPP_

#include "protocol.hpp"

class STP : public Protocol {
  private:
    int _pathWeight;
    int _nextNodeId;
    int _id;
    int _rootId;

  public:
    STP(int id);
    void input(const std::string& message) override;
    std::string reply() const override;
};

#endif // !STP_HPP_

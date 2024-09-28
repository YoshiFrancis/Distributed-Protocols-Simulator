#ifndef STP_HPP_
#define STP_HPP_

#include "protocol.hpp"
#include <string>
#include <array>
#include <vector>

class STP : public Protocol {
  private:
    int _pathWeight;
    int _nextNodeId;
    int _rootId;

  public:
    STP(int id, std::unordered_map<int, int> map);
    bool input(const std::string& message) override;
    std::string reply() const override;
    void setMap(int key, int value) override;
  private:
    std::array<int, 4> parse(const std::string& message) const;
};

#endif // !STP_HPP_

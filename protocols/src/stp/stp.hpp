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
    int _id;
    std::unordered_map<int, int> _map;

  public:
    STP();
    void init(int id, std::unordered_map<int, int> map) override;
    bool input(const std::string& message) override;
    std::string reply() const override;
    void setMap(int key, int value) override;
    std::string getState() const override;
    Protocol* clone() override;
  private:
    std::array<int, 4> parse(const std::string& message) const;
};

#endif // !STP_HPP_

#ifndef STP_HPP_
#define STP_HPP_

/*#include "protocol.hpp"*/
#include <string>
#include <array>
#include <vector>

class STP {
  private:
    int _pathWeight;
    int _nextNodeId;
    int _id;
    int _rootId;
    std::unordered_map<int, int> _map; // root path, weight

  public:
    STP(int id, std::unordered_map<int, int> map);
    bool input(const std::string& message);
    std::string reply() const;
    void setMap(int key, int value);
  private:
    std::array<int, 4> parse(const std::string& message) const;
};

#endif // !STP_HPP_

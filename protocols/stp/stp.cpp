#include "stp.hpp"

STP::STP(int id) : _pathWeight(0), _nextNodeId(id), _id(id), _rootId(id)
{}

void STP::input(const std::string& message) override {

}

// (R, P, C, N)
// Knowledge of a root R with a path weight of P from the current node
// C with the next hop of N
std::string STP::reply() const override {
  return "(" + std::to_string(_rootId)
    + ", " + std::to_string(_pathWeight)
    + ", " + std::to_string(_id)
    + ", " + std::to_string(_nextNodeId)
    + ")";
}

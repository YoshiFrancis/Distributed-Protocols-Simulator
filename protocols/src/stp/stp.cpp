#include "stp.hpp"
#include <iostream>
#include <string>

STP::STP(int id, std::unordered_map<int, int> map) : _pathWeight(0), _nextNodeId(id), _id(id), _rootId(id), _map(map)
{}

bool STP::input(const std::string& message) {
  std::array<int, 4> info = parse(message);
  bool _hasChanged = false;
  if (info[3] == _nextNodeId) {
    _rootId = info[0];
    _pathWeight = info[1] + _map[info[3]];
    _hasChanged = true;
  } 
  else { if (info[0] < _rootId) {
      _rootId = info[0];
      _pathWeight = info[1] + _map[info[3]];
      _nextNodeId = info[3];
      _hasChanged = true;
    } 
    else if (info[0] == _rootId) {
      if (info[1] + _map[info[3]] < _pathWeight) {
        _pathWeight = info[1] + _map[info[3]];
        _nextNodeId = info[3];
        _hasChanged = true;
      } 
      else if (info[1] + _map[info[3]] == _pathWeight && info[3] < _nextNodeId) {
        _nextNodeId = info[3];
        _hasChanged = true;
      }
    }
  }

  return _hasChanged;
}

std::array<int, 4> STP::parse(const std::string& message) const {
  std::vector<std::string> numberStrings;
  std::string::size_type pos = 0;
  std::string::size_type prev = 1; // first character is a parenthesis, so we skip
  while ((pos = message.find(",", prev)) != std::string::npos) {
    numberStrings.push_back(message.substr(prev, pos - prev));
    ++pos;
    prev = pos;
  }
  numberStrings.push_back(message.substr(prev));
  std::array<int, 4> parsedNumbers;
  parsedNumbers[0] = std::stoi(numberStrings[0]);
  parsedNumbers[1] = std::stoi(numberStrings[1]);
  parsedNumbers[2] = std::stoi(numberStrings[2]);
  parsedNumbers[3] = std::stoi(numberStrings[3]);
  return parsedNumbers;
}

// (R, P, C, N)
// Knowledge of a root R with a path weight of P from the current node
// C with the next hop of N
std::string STP::reply() const {
  return "(" + std::to_string(_rootId)
    + "," + std::to_string(_pathWeight)
    + "," + std::to_string(_id)
    + "," + std::to_string(_nextNodeId) // important we do no space with commas because std::iostream << stops on spaces
    + ")\n";
}

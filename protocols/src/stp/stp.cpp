#include "stp.hpp"

STP::STP() {}

void STP::init(int id, std::unordered_map<int, int> map) {
  _id = id;
  _map = map;
  _pathWeight = 0;
  _nextNodeId = id;
  _rootId = id;
  _shouldBroadcast = true;
}

void STP::input(const std::string& message) {
  std::array<int, 4> info = parse(message);
  if (info[2] == _nextNodeId) {
    _rootId = info[0];
    _pathWeight = info[1] + _map[info[2]];
    _shouldBroadcast = true;
  } 
  else { 
    if (info[0] < _rootId) {
      _rootId = info[0];
      _pathWeight = info[1] + _map[info[2]];
      _nextNodeId = info[2];
      _shouldBroadcast = true;
    } 
    else if (info[0] == _rootId) {
      if (info[1] + _map[info[2]] < _pathWeight) {
        _pathWeight = info[1] + _map[info[2]];
        _nextNodeId = info[2];
        _shouldBroadcast = true;
      } 
      else if (info[1] + _map[info[2]] == _pathWeight && info[2] < _nextNodeId) {
        _nextNodeId = info[2];
      }
    }
  }
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

std::string STP::reply() {
  if (_shouldBroadcast) {
    _shouldBroadcast = false;
    return getState();
  }
  else
    return "";
}

void STP::setMap(int key, int value) {
  _map[key] = value;
}

// (R, P, C, N)
// Knowledge of a root R with a path weight of P from the current node
// C with the next hop of N
std::string STP::getState() const {
  return "(" + std::to_string(_rootId)
    + "," + std::to_string(_pathWeight)
    + "," + std::to_string(_id)
    + "," + std::to_string(_nextNodeId) // important we do no space with commas because std::iostream << stops on spaces
    + ")\n";
}

Protocol* STP::clone() {
  return new STP;
}

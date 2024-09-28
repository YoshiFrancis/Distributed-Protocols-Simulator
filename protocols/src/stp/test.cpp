#include <iostream>
#include "stp.hpp"

int main (int argc, char* argv[]) {
  std::unordered_map<int, int> mapping;
  for (int i = 0; i < 20; ++i) {
    mapping[i] = i+1;
  }
  STP myStyp (5, mapping);
  std::string test_message_1 { "(1,2,3,4)"};
  std::string test_message_2 { "(5,6,7,8)"};
  myStyp.input(test_message_1);
  myStyp.input(test_message_2);
  std::string reply = myStyp.reply();
  std::cout << reply << "\n";
}

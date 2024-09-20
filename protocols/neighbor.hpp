#ifndef NEIGHBOR_HPP_
#define NEIGHBOR_HPP_
#include <iostream>

class Neighbor {

private:
  int _id;

public:
  Neighbor();
  Neighbor(Neighbor &&) = default;
  Neighbor(const Neighbor &) = default;
  Neighbor &operator=(Neighbor &&) = default;
  Neighbor &operator=(const Neighbor &) = default;
  ~Neighbor();

private:
  
};

Neighbor::Neighbor() {
}

Neighbor::~Neighbor() {
}

#endif // !NEIGHBOR

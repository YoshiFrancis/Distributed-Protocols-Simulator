#ifndef NEIGHBOR_HPP_
#define NEIGHBOR_HPP_

#include <sstream>

class Neighbor
{
  private:
    std::stringstream _stream;
    int _weight;

  public:
    Neighbor();
    Neighbor(Neighbor &&) = default;
    Neighbor(const Neighbor &) = default;
    Neighbor &operator=(Neighbor &&) = default;
    Neighbor &operator=(const Neighbor &) = default;
    ~Neighbor();

    void writeTo(std::string message);
    std::string readFrom();
    int getWeight() const;
  private:
};

#endif // !NEIGHBOR

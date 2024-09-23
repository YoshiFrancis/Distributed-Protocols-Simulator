#ifndef NEIGHBOR_HPP_
#define NEIGHBOR_HPP_

#include <sstream>

// bidirectional
class Edge
{
  private:
    std::istream& _istream;
    std::ostream& _ostream;
    int _weight;
    int _id;

  public:
    Edge(std::istream& stream, std::ostream& ostream, int weight, int id);
    Edge(Edge &&) = default;
    Edge(const Edge &) = default;
    Edge &operator=(Edge &&) = default;
    Edge &operator=(const Edge &) = default;
    ~Edge();

    void write(std::string message);
    std::string read();
    int getWeight() const;
    int getId() const;
};

#endif // !NEIGHBOR

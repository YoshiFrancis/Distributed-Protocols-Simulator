#include "graph.hpp"
#include <vector>
#include <random>

void generateEdges(std::vector<std::vector<int>>& edges_list) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> distCount(1,3); 
  std::uniform_int_distribution<std::mt19937::result_type> distEdgeIdx(0, edges_list.size() - 1); 
  
  for (int idx = 0; idx < edges_list.size(); ++idx) {
    if (edges_list[idx].size() > 0)
      continue;
    int edgeCount = distCount(rng);
    while (edgeCount > 0) {
      int edgeIdx = distEdgeIdx(rng);
      if (edgeIdx == idx)
        continue;
      edges_list[idx].push_back(edgeIdx);
      edges_list[edgeIdx].push_back(idx); // links are duplex, so if edges_list[idx] connect to edgeIdx, edgeIdx also connects back
    }

  }
}

Graph::Graph(Protocol protocol, std::istream& lstream, int nodeCount)
  : _protocol(protocol), _lstream(lstream), _nodeCount(nodeCount), _nodes(nodeCount)
{
  // making the graph
  
  // list<Edge> edges(0)
  // list<list<int>> edges_list(nodeCount)
  // generateEdges(edges_list, nodeCount)
  // create graph from edges list
  std::vector<Edge> edges;
  std::vector<std::vector<int>> adj_list(_nodeCount);
  generateEdges(adj_list);
  for (int idx = 0; idx < _nodeCount; ++idx) {
    for (auto edgeIdx : adj_list[idx]) {
      if (edgeIdx <= idx)  // if the edgeIdx is smaller than the current idx, the edgeIdx would have already made the neighbor connection on their iteration
        continue; 
      // make connection for sending/receiving for both
      // each node will receive their own copy of an edge to send/rcv data
    }
  }

}

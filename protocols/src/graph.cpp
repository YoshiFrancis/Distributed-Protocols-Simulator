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

Graph::~Graph() {}

Graph::Graph(Protocol* protocol, std::ostream& lstream, int nodeCount)
  : _protocol(protocol), _lstream(lstream), _nodeCount(nodeCount)
{
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(1,10); 

  // making the graph
  std::vector<Edge> edges;
  std::vector<std::vector<int>> adj_list(_nodeCount);
  generateEdges(adj_list);
  for (int idx = 0; idx < _nodeCount; ++idx) {
    _nodes.push_back(Node(_lstream, protocol, idx));
    for (auto edgeIdx : adj_list[idx]) {
      if (edgeIdx <= idx)  // if the edgeIdx is smaller than the current idx, the edgeIdx would have already made the neighbor connection on their iteration
        continue; 
      std::stringstream connection_1;
      std::stringstream connection_2;
      _streams.push_back(std::move(connection_1));
      std::stringstream& new_conn_1 = _streams.back();
      _streams.push_back(std::move(connection_2));
      std::stringstream& new_conn_2 = _streams.back();
      int weight = dist(rng);
      Edge nodeOneEdge(new_conn_1, new_conn_2, weight, edgeIdx);
      _nodes[idx].addEdge(nodeOneEdge, true);
      _nodes[idx].addEdge(nodeOneEdge, false);
      Edge nodeTwoEdge(new_conn_2, new_conn_1, weight, idx);
      _nodes[edgeIdx].addEdge(nodeTwoEdge, true);
      _nodes[edgeIdx].addEdge(nodeTwoEdge, false);
    }
  }
}

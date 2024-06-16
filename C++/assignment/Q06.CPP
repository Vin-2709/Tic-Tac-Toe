#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct Edge {
  int source;
  int destination;
  int weight;

  Edge(int source, int destination, int weight)
      : source(source), destination(destination), weight(weight) {}
};

bool BellmanFord(const vector<Edge>& edges, int numVertices, int source) {
  vector<int> distance(numVertices, INF);
  distance[source] = 0;

  // Relax all edges |numVertices| - 1 times
  for (int i = 0; i < numVertices - 1; ++i) {
    for (const Edge& edge : edges) {
      int u = edge.source;
      int v = edge.destination;
      int weight = edge.weight;

      if (distance[u] != INF && distance[u] + weight < distance[v]) {
        distance[v] = distance[u] + weight;
      }
    }
  }

  // Check for negative-weight cycles
  for (const Edge& edge : edges) {
    int u = edge.source;
    int v = edge.destination;
    int weight = edge.weight;

    if (distance[u] != INF && distance[u] + weight < distance[v]) {
      return false; // Negative cycle detected
    }
  }

  // Print shortest distances
  cout << "Vertex \t\t Distance from Source " << source << endl;
  for (int i = 0; i < numVertices; ++i) {
    cout << i << "\t\t";
    if (distance[i] == INF) {
      cout << "Unreachable" << endl;
    } else {
      cout << distance[i] << endl;
    }
  }

  return true; // No negative cycle found
}

int main() {
  int numVertices = 5; 
  vector<Edge> edges = {
      {0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {2, 1, 1}, {3, 2, 5}};
  int source = 0;

  if (BellmanFord(edges, numVertices, source)) {
    cout << "No negative weight cycle found\n";
  } else {
    cout << "Graph contains negative weight cycle\n";
  }

  return 0;
}

#include <iostream>
#include <vector>
#include <limits>
#include <queue>

using namespace std;

const int INF = numeric_limits<int>::max();

vector<int> Dijkstra(const vector<vector<pair<int, int>>>& graph, int source) {
  int n = graph.size();
  vector<int> distances(n, INF);
  distances[source] = 0;

  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push(make_pair(0, source));

  while (!pq.empty()) {
    int currentDist = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if (currentDist > distances[u]) {
      continue; // Already processed with a lower distance
    }

    for (const pair<int, int>& edge : graph[u]) {
      int v = edge.first;
      int weight = edge.second;

      int newDist = currentDist + weight;
      if (newDist < distances[v]) {
        distances[v] = newDist;
        pq.push(make_pair(newDist, v));
      }
    }
  }

  return distances;
}

int main() {
  // Sample graph (adjust as needed)
  vector<vector<pair<int, int>>> graph = {
      {{1, 4}, {2, 8}},
      {{2, 7}, {3, 6}},
      {{}, {4, 9}},
      {{}, {}},
  };

  int source = 0;
  vector<int> distances = Dijkstra(graph, source);

  cout << "Shortest Distances from Source " << source << ":\n";
  for (int i = 0; i < distances.size(); ++i) {
    if (distances[i] == INF) {
      cout << "Vertex " << i << " is unreachable\n";
    } else {
      cout << "Vertex " << i << ": " << distances[i] << endl;
    }
  }

  return 0;
}

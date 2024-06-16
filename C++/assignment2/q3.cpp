#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9; 
const int N = 4;
int dist[N][N] = {
    {0, 10, 15, 20},
    {10, 0, 35, 25},
    {15, 35, 0, 30},
    {20, 25, 30, 0}
};
vector<bool> visited(N, false);
int minCost = INF;
vector<int> optimalPath;

void tsp(int currCity, int visitedCount, int currCost, vector<int>& path) {
    if (visitedCount == N) {
        int totalCost = currCost + dist[currCity][0];
        if (totalCost < minCost) {
            minCost = totalCost;
            optimalPath = path;
        }
        return;
    }

    for (int nextCity = 0; nextCity < N; ++nextCity) {
        if (!visited[nextCity]) {
            visited[nextCity] = true;
            path.push_back(nextCity);
            tsp(nextCity, visitedCount + 1, currCost + dist[currCity][nextCity], path);
            path.pop_back();
            visited[nextCity] = false;
        }
    }
}

int main() {
    visited[0] = true; 
    vector<int> initialPath = {0}; 

    cout << "Minimum cost of TSP tour: " << minCost << endl;
    cout << "Optimal path: ";
    for (int city : optimalPath) {
        cout << city << " ";
    }
    cout << "0" << endl; 
    return 0;
}

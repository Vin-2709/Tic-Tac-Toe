#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int optimalMergeCost(vector<int>& files) {
priority_queue<int, vector<int>, greater<int>> pq(files.begin(), files.end());
int totalCost = 0;
while (pq.size() > 1) {
int first = pq.top();
pq.pop();
int second = pq.top();
pq.pop();
int mergeCost = first + second;
totalCost += mergeCost;
pq.push(mergeCost);
}
return totalCost;
}
int main() {
vector<int> files = {20,11,9,17};
int minCost = optimalMergeCost(files);
cout << "Minimum cost of merging: " << minCost << endl;
return 0;
}

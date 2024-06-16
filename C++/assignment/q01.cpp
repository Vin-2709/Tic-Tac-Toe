#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double fractionalKnapsack(const vector<int>& values, const vector<int>& weights, int capacity) {
  int n = values.size();
  vector<pair<double, int>> items(n);

  // Calculate value/weight ratio and store in a pair with weight
  for (int i = 0; i < n; ++i) {
    items[i] = {static_cast<double>(values[i]) / weights[i], weights[i]};
  }

  sort(items.begin(), items.end(), greater<pair<double, int>>());

  double totalValue = 0.0;
  int remainingCapacity = capacity;

  for (int i = 0; i < n; ++i) {
    if (items[i].second <= remainingCapacity) {
      // Add the whole item
      totalValue += values[i];
      remainingCapacity -= items[i].second;
    } else {
      // Add a fraction of the item
      double fraction = (double)remainingCapacity / items[i].second;
      totalValue += fraction * values[i];
      break;
    }
  }

  return totalValue;
}

int main() {
  int n, capacity;
  cout << "Enter the number of items: ";
  cin >> n;

  cout << "Enter the capacity of the knapsack: ";
  cin >> capacity;

  vector<int> values(n), weights(n);
  cout << "Enter value and weight for each item:\n";
  for (int i = 0; i < n; ++i) {
    cin >> values[i] >> weights[i];
  }

  double maxValue = fractionalKnapsack(values, weights, capacity);
  cout << "Maximum value achievable: " << maxValue << endl;

  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
  int value;
  int weight;
  double ratio; // value/weight ratio
};

bool compareItems(const Item& a, const Item& b) {
  return a.ratio > b.ratio;
}

double fractionalKnapsack(const vector<Item>& items, int capacity) {
  int n = items.size();
  vector<Item> sortedItems(items);
  sort(sortedItems.begin(), sortedItems.end(), compareItems);

  double totalValue = 0.0;
  int remainingCapacity = capacity;

  for (const Item& item : sortedItems) {
    if (remainingCapacity >= item.weight) {
      // Take the whole item
      totalValue += item.value;
      remainingCapacity -= item.weight;
    } else {
      // Take a fraction of the item
      double fraction = (double)remainingCapacity / item.weight;
      totalValue += fraction * item.value;
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

  vector<Item> items(n);
  cout << "Enter value and weight for each item:\n";
  for (int i = 0; i < n; i++) {
    cin >> items[i].value >> items[i].weight;
    items[i].ratio = (double)items[i].value / items[i].weight;
  }

  double maxValue = fractionalKnapsack(items, capacity);
  cout << "Maximum value achievable: " << maxValue << endl;

  return 0;
}

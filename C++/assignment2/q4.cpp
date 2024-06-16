#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Item struct to store item information
struct Item {
  int weight;
  int value;
};

// Function to calculate the upper bound for a partial solution
int calculateUpperBound(const vector<Item>& items, int currentWeight, int currentIndex, int capacity) {
  int upperBound = 0;
  upperBound += currentWeight;

  // Added remaining items' values proportionally based on weight/value ratio
  for (int i = currentIndex; i < items.size(); i++) {
    int remainingWeight = capacity - currentWeight;
    if (items[i].weight <= remainingWeight) {
      upperBound += items[i].value;
    } else {
      upperBound += items[i].value * (double)remainingWeight / items[i].weight;
      break; // No need to consider further items if weight exceeds capacity
    }
  }

  return upperBound;
}

// Branch and bound function to find the maximum value
int findMaxValue(const vector<Item>& items, vector<bool>& currentSelection, int currentWeight,
                 int currentIndex, int capacity, int& maxValue) {
  int n = items.size();
  if (currentIndex == n) {
    int totalValue = 0;
    for (int i = 0; i < n; i++) {
      if (currentSelection[i]) {
        totalValue += items[i].value;
      }
    }
    maxValue = max(maxValue, totalValue);
    return maxValue;
  }
  int upperBound = calculateUpperBound(items, currentWeight, currentIndex, capacity);
  if (upperBound <= maxValue) {
    return maxValue;
  }
  currentSelection[currentIndex] = true;
  maxValue = findMaxValue(items, currentSelection, currentWeight + items[currentIndex].weight,currentIndex + 1, capacity, maxValue);
  currentSelection[currentIndex] = false;
  maxValue = findMaxValue(items, currentSelection, currentWeight, currentIndex + 1, capacity, maxValue);
  return maxValue;
}

int main() {
  vector<Item> items = {
      {2, 6},
      {2, 10},
      {1, 3},
      {5, 15},
  };

  int capacity = 5;
  int n = items.size();
  vector<bool> currentSelection(n, false);
  int maxValue = 0;

  maxValue = findMaxValue(items, currentSelection, 0, 0, capacity, maxValue);
  cout << "Maximum Value: " << maxValue << endl;
  return 0;
}

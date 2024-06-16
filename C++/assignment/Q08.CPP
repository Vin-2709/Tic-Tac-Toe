#include <iostream>
#include <vector>
using namespace std;

bool subsetSumBacktrack(const vector<int>& arr, int n, int sum, vector<int>& currentSubset) {
  if (sum == 0) {
    cout << "Subset Found: ";
    for (int num : currentSubset) {
      cout << num << " ";
    }
    cout << endl;
    return true;
  }

  if (n == 0 || sum < 0) {
    return false;
  }

  currentSubset.push_back(arr[n - 1]);
  bool foundWithCurrent = subsetSumBacktrack(arr, n - 1, sum - arr[n - 1], currentSubset);

  currentSubset.pop_back();
  bool foundWithoutCurrent = subsetSumBacktrack(arr, n - 1, sum, currentSubset);

  return foundWithCurrent || foundWithoutCurrent;
}

void subsetSum(const vector<int>& arr, int sum) {
  int n = arr.size();
  vector<int> currentSubset;

  if (sum == 0) {
    cout << "Subset Found: {}" << endl;
    return;
  }

  bool found = subsetSumBacktrack(arr, n, sum, currentSubset);
  if (!found) {
    cout << "No subset found with sum " << sum << endl;
  }
}

int main() {
  vector<int> arr = {3, 2, 7, 1};
  int sum = 6;

  subsetSum(arr, sum);

  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

vector<int> naiveStringMatching(const string& text, const string& pattern) {

  vector<int> matches;
  int n = text.length();
  int m = pattern.length();

  for (int i = 0; i <= n - m; i++) {
    int k = 0;
    while (k < m && text[i + k] == pattern[k]) {
      k++;
    }
    if (k == m) {
      matches.push_back(i);
    }
  }

  return matches;
}

int main() {
  string text = "ABABDABACDABABCABAB";
  string pattern = "ABABCABAB";

  vector<int> matches = naiveStringMatching(text, pattern);

  cout << "Matches found at indices: ";
  for (int i : matches) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}


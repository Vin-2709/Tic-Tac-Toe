#include <iostream>
#include <vector>
using namespace std;
bool isSafe(const vector<int>& cols, int row, int col) {
  
  for (int i = 0; i < row; ++i) {
    if (cols[i] == col || abs(cols[i] - col) == abs(row - i)) {
      return false;
    }
  }
  return true;
}

void printSolution(const vector<int>& cols) {
  int N = cols.size();
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (cols[i] == j) {
        cout << "Q ";
      } else {
        cout << ". ";
      }
    }
    cout << endl;
  }
  cout << endl;
}

void solveNQueens(vector<int>& cols, int row, int N) {

  if (row == N) {
    printSolution(cols);
    return;
  }

  for (int col = 0; col < N; ++col) {
    if (isSafe(cols, row, col)) {
      cols[row] = col; 
      solveNQueens(cols, row + 1, N); 
    }
  }
}

int main() {
  int N;
  cout << "Enter the number of queens: ";
  cin >> N;

  vector<int> cols(N, -1); 
  cout << "All solutions for " << N << " queens:\n";
  solveNQueens(cols, 0, N);

  return 0;
}

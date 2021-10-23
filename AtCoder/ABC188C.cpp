#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  int max = 1 << N;
  int A[max];

  for (int i = 0; i < max; i++) cin >> A[i];

  vector<int> remain;
  for (int i = 0; i < 1 << N; i++) remain.push_back(i);

  for (int i = 1; i <= N; i++) {
    vector<int> next_remain;
    for (int j = 0; j < 1 << (N - i); j++) {
      if (A[remain[2 * j]] > A[remain[2 * j + 1]])
        next_remain.push_back(remain[2 * j]);
      else
        next_remain.push_back(remain[2 * j + 1]);
    }
    if (i == N) {
      cout << 1 + (remain[0] == next_remain[0] ? remain[1] : remain[0]) << endl;
      return 0;
    }
    remain = next_remain;
  }
}
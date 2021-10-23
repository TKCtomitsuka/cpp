#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, D, X;
  cin >> N;
  cin >> D >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> cnt(N, 0);
  for (int i = 0; i < N; i++) {
    int j = 0;
    while (j * A[i] + 1 <= D) {
      ++cnt[i];
      ++j;
    }
  }
  cout << accumulate(cnt.begin(), cnt.end(), 0) + X << endl;
}
#include <bits/stdc++.h>

using namespace std;

int N, A[20];

int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> A[i];

  if (N == 1) {
    cout << A[0] << endl;
    return 0;
  }

  int ans = 1 << 30;
  for (int msk = 0; msk < 1 << (N - 1); msk++) {
    int tot = 0;
    int cur = A[0];
    for (int i = 0; i <= N; i++) {
      if (i < N) cur |= A[i];
      if (i == N || msk & (1 << i)) {
        tot ^= cur;
        cur = 0;
      }
    }
    ans = min(ans, tot);
  }
  cout << ans << endl;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  vector<int> cnt(N, 0);
  for (size_t i = 0; i < A.size(); i++) {
    cin >> A[i];
    while (A[i] % 2 == 0) {
      ++cnt[i];
      A[i] /= 2;
    }
  }
  cout << *min_element(cnt.begin(), cnt.end()) << endl;
}
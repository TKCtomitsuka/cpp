#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  long N;
  long long big = 1ll << 60;
  cin >> N;
  vector<long long> A, P, X;
  for (int i = 0; i < N; i++) {
    long long a, p, x;
    cin >> a >> p >> x;
    A.push_back(a);
    P.push_back(p);
    X.push_back(x);
  }
  vector<long long> money;
  for (int j = 0; j < N; j++) {
    if (X[j] - A[j] > 0) {
      money.push_back(P[j]);
    } else {
      money.push_back(big);
    }
  }
  sort(money.begin(), money.end());
  if (money[0] != big) {
    cout << money[0] << endl;
  } else {
    cout << -1 << endl;
  }
}
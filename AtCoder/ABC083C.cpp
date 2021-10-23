#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
  ll X, Y;
  cin >> X >> Y;
  int cnt = 0;
  while (X <= Y) {
    ++cnt;
    X *= 2;
  }
  cout << cnt << endl;
}
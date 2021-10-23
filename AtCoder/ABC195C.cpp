#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  int comma_n;
  string Nstr = to_string(N);
  if (Nstr.size() % 3 == 0) {
    comma_n = (Nstr.size() / 3) - 1;
  } else {
    comma_n = Nstr.size() / 3;
  }
}
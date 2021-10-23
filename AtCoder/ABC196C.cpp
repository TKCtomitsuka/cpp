#include <bits/stdc++.h>

using namespace std;

int main() {
  long long N;
  cin >> N;
  int cnt = 0;
  int i = 1;
  while (stoll(to_string(i) + to_string(i)) <= N) {
    ++cnt;
    ++i;
  }
  cout << cnt << endl;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  long long N, Y;
  cin >> N >> Y;
  int a = -1, b = -1, c = -1;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++) {
      if (10000 * i + 5000 * j + 1000 * (N - i - j) == Y) {
        a = i;
        b = j;
        c = N - i - j;
        cout << a << " " << b << " " << c << endl;
        return 0;
      }
    }
  }
  cout << a << " " << b << " " << c << endl;
}
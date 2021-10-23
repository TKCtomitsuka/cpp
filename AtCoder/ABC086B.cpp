#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int c = stoi(a + b);
  for (int i = 1; i <= c / 2; i++) {
    if (i * i == c) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
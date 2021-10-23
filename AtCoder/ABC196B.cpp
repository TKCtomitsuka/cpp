#include <bits/stdc++.h>

using namespace std;

int main() {
  string X;
  cin >> X;
  for (size_t i = 0; i < X.size(); i++) {
    if (X[i] == '.') {
      X.erase(X.begin() + i, X.end());
      cout << X << endl;
      return 0;
    }
  }
  cout << X << endl;
}
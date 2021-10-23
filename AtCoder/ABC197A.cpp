#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  char s = S[0];
  S = S.substr(1);
  S = S + s;
  cout << S << endl;
}
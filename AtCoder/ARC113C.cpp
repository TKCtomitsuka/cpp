#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  cin >> S;
  int cnt = 0;
  for (int i = S.size() - 3; i >= 0; i--) {
    if ((S[i] == S[i + 1]) && (S[i + 1] != S[i + 2])) {
      int pos = S.find(S[i], i + 2);
      if (pos == string::npos) {
        cnt += S.size() - 2 - i;
      } else {
        cnt += pos - i - 2;
        cout << pos << endl;
      }
    }
  }
  cout << cnt << endl;
}
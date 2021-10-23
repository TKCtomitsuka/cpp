#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  vector<string> S;
  for (int i = 0; i < H; i++) {
    string s;
    cin >> s;
    S.push_back(s);
  }
  cout << S[H][W] << endl;
}
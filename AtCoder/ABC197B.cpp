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
  X--;
  Y--;
  H--;
  W--;
  int cnt;
  int y_pos = Y + 1;
  int y_nega = Y - 1;
  if (y_pos != W + 1) {
    while (S[X][y_pos] == '.') {
      ++cnt;
      ++y_pos;
      if (y_pos == W + 1) {
        break;
      }
    }
  }
  if (y_nega != -1) {
    while (S[X][y_nega] == '.') {
      ++cnt;
      --y_nega;
      if (y_nega == -1) {
        break;
      }
    }
  }
  int x_pos = X + 1;
  int x_nega = X - 1;
  if (x_pos != H + 1) {
    while (S[x_pos][Y] == '.') {
      ++cnt;
      ++x_pos;
      if (x_pos == H + 1) {
        break;
      }
    }
  }
  if (x_nega != -1) {
    while (S[x_nega][Y] == '.') {
      ++cnt;
      --x_nega;
      if (x_nega == -1) {
        break;
      }
    }
  }
  cout << cnt + 1 << endl;
}

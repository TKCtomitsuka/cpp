#include <bits/stdc++.h>

using namespace std;

int main() {
  double A, B, W;
  cin >> A >> B >> W;
  W = W * 1000;
  int ans_min = 10000000;
  int ans_max = 0;
  bool finished_1 = false;
  for (int x_2 = W / B; x_2 >= 0; x_2--) {
    for (int x_1 = 0; x_1 <= W / A; x_1++) {
      if (A * x_1 <= (W - (x_2 * B)) && (W - (x_2 * B)) <= B * x_1) {
        ans_min = x_1 + x_2;
        finished_1 = true;
        break;
      }
    }
    if (finished_1) {
      break;
    }
  }
  bool finished = false;
  for (int x_1 = W / A; x_1 >= 0; x_1--) {
    for (int x_2 = W / B; x_2 >= 0; x_2--) {
      if (A * x_2 <= (W - (x_1 * A)) && (W - (x_1 * A)) <= B * x_2) {
        ans_max = x_1 + x_2;
        finished = true;
        break;
      }
    }
    if (finished) {
      break;
    }
  }
  if (ans_min == 10000000 || ans_max == 0) {
    cout << "UNSATISFIABLE" << endl;
    return 0;
  } else {
    cout << ans_min << " " << ans_max << endl;
  }
}
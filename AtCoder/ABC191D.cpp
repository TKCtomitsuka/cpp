#include <iostream>

using namespace std;

int main() {
  double X, Y, R;
  cin >> X >> Y >> R;
  int right = (int)(X + R);
  int left = (int)(X - R);
  int up = (int)(Y + R);
  int bottom = (int)(Y - R);
  int count = 0;
  for (int i = left; i <= right; i++) {
    for (int j = bottom; j <= up; j++) {
      if (((double(i) - X) * (double(i) - X)) +
              ((double(j) - Y) * (double(j) - Y)) <=
          R * R) {
        count += 1;
      } else
        continue;
    }
  }
  cout << count << endl;
  // cout << left << " " << right << " " << up << " " << bottom << endl;
}
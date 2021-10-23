#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a, b, c, X;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> X;
  int cnt = 0;
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        if (500 * i + 100 * j + 50 * k == X) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
}
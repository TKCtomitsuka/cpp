#include <iostream>

using namespace std;

int sum(int x) {
  int s = 0;
  while (x > 0) {
    s += (x % 10);
    x /= 10;
  }
  return s;
}

int main() {
  int N, A, B;
  int allsum = 0;
  cin >> N >> A >> B;
  for (int i = 1; i <= N; i++) {
    if (A <= sum(i) && sum(i) <= B) {
      allsum += i;
    }
  }
  cout << allsum << endl;
}
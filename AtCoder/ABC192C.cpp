#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <new>
#include <vector>

using namespace std;

void collect_digits(std::vector<int>& digits, long num) {
  if (num > 9) {
    collect_digits(digits, num / 10);
  }
  digits.push_back(num % 10);
}

long make_(vector<int>& digits) {
  long g1 = 0;
  int size = digits.size();
  for (int i = 0; i < size; i++) {
    g1 += digits[i] * pow(10, size - i - 1);
  }
  return g1;
}

long f_(long N) {
  vector<int> v;
  collect_digits(v, N);
  sort(v.begin(), v.end(), greater<int>());
  long g1 = make_(v);
  sort(v.begin(), v.end());
  long g2 = make_(v);
  long f = g1 - g2;
  return f;
}

//再帰関数ver.
long a_(int K, long N) {
  if (K == 0) {
    return N;
  }
  return f_(a_(K - 1, N));
}

int main() {
  long N;
  int K;
  cin >> N >> K;
  long a = f_(N);
  int i = 0;
  while ((i < K - 1) && (K >= 2)) {
    a = f_(a);
    i++;
  }
  if (K == 0) {
    cout << N << endl;
  } else {
    cout << a << endl;
  }
  //  cout << a_(K, N) << endl; 再帰関数を用いる場合
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
  long N;
  cin >> N;
  vector<long> A(N);
  for (long i = 1; i <= N; i++) {
    cin >> A[i];
  }
  long sum_1 = 0;
  for (long i = 1; i <= N; i++) {
    sum_1 += N * (A[i] * A[i]);
  }
  long sum_2 = 0;
  for (int i = 1; i <= N; i++) {
    sum_2 += A[i];
  }
  sum_2 *= sum_2;
  cout << sum_1 - sum_2 << endl;
}
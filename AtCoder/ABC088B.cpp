#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end(), greater<int>());
  int Alice = 0;
  int Bob = 0;
  bool turn_alice = true;
  for (int i = 0; i < A.size(); i++) {
    if (turn_alice) {
      Alice += A[i];
      turn_alice = false;
    } else {
      Bob += A[i];
      turn_alice = true;
    }
  }
  cout << Alice - Bob << endl;
}
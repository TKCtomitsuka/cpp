#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N), MAX;
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }
  int ans;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        MAX.push_back(A[i] + B[i]);
      } else {
        MAX.push_back(max(A[i], B[j]));
      }
    }
  }
  cout << *min_element(MAX.begin(), MAX.end()) << endl;
}
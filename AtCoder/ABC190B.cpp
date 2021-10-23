#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
  int N;
  ll X[110], Y[110];
  ll S, D;
  cin >> N >> S >> D;
  for (int i = 1; i <= N; i++) {
    cin >> X[i] >> Y[i];
  }
  for (int j = 1; j <= N; j++) {
    if (X[j] < S && Y[j] > D) {
      cout << "Yes" << endl;
      return 0;
    } else {
      continue;
    }
  }
  cout << "No" << endl;
}
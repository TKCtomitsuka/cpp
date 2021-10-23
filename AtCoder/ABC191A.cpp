#include <iostream>

using namespace std;

int main() {
  int V, T, S, D;
  cin >> V >> T >> S >> D;
  if (D < T * V || S * V < D) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
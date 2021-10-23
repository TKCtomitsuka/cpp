#include <iostream>

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  double C = ((float)A - (float)B) * 100 / (float)A;
  cout << C;
}
#include <iostream>
using namespace std;

int main() {
  long X;
  cin >> X;
  long Y = 100 - (X % 100);
  cout << Y << endl;
}
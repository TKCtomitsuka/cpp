#include <iostream>
#include <vector>
using namespace std;

int main() {
  int K;
  cin >> K;
  int count = 0;
  for (int c = 1; c <= K; c++) {
    for (int b = 1; b <= K / c; b++) {
      for (int a = 1; a <= (K / c) / b; a++) {
        count++;
      }
    }
  }
  cout << count << endl;
}

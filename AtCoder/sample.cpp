#include <iostream>

using namespace std;

int N;
int* func(int* a) {
  for (int i = 0; i < N; i++) {
    a[i] *= 2;
  }
  return a;
}

int main() {
  int a[100];
  cin >> N;
  for (int i = 0; i < N; i++) a[i] = i * i;
  int* b = func(a);
  for (int i = 0; i < N; i++) cout << b[i] << endl;
}

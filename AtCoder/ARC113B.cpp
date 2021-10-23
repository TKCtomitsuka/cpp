#include <stdlib.h>

#include <iostream>

using namespace std;

int compME(int b, int e, int m) {
  int ans = 1;

  while (e > 0) {
    if ((e & 1) == 1) ans = (ans * b) % m;
    e >>= 1;
    b = (b * b) % m;
  }

  return ans;
}

int main() {
  long A, B, C;
  cin >> A >> B >> C;
  int A1 = A % 10;
  int list2[] = {2, 4, 8, 6};
  int list3[] = {3, 9, 7, 1};
  int list4[] = {4, 6};
  int list7[] = {7, 9, 3, 1};
  int list8[] = {8, 4, 2, 6};
  int list9[] = {9, 1};
  int ans;
  switch (A1) {
    case 0:
      ans = 0;
      break;
    case 1:
      ans = 1;
      break;
    case 2:
      if (compME(B, C, 4) == 0) {
        ans = list2[3];
      } else {
        ans = list2[compME(B, C, 4) - 1];
      }
      break;
    case 3:
      if (compME(B, C, 4) == 0) {
        ans = list3[3];
      } else {
        ans = list3[compME(B, C, 4) - 1];
      }
      break;
    case 4:
      if (compME(B, C, 2) == 0) {
        ans = list4[1];
      } else {
        ans = list4[compME(B, C, 2) - 1];
      }
      break;
    case 5:
      ans = 5;
      break;
    case 6:
      ans = 6;
      break;
    case 7:
      if (compME(B, C, 4) == 0) {
        ans = list7[3];
      } else {
        ans = list7[compME(B, C, 4) - 1];
      }
      break;
    case 8:
      if (compME(B, C, 4) == 0) {
        ans = list8[3];
      } else {
        ans = list8[compME(B, C, 4) - 1];
      }
      break;
    case 9:
      if (compME(B, C, 2) == 0) {
        ans = list9[1];
      } else {
        ans = list9[compME(B, C, 2) - 1];
      }
      break;
  }
  cout << ans << endl;
}

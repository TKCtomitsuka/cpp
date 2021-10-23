#include <iostream>
#include <string>

using namespace std;
int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i = i + 2) {
    if (isupper(S[i]) || islower(S[i + 1])) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
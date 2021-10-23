#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  std::vector<int> v;
  for (int i = 0; i < N; i++) {
    int Ai;
    cin >> Ai;
    v.push_back(Ai);
  }

  for (auto it = v.begin(); it != v.end();) {
    if (*it == X) {
      it = v.erase(it);
    } else {
      ++it;
    }
  }
  for (auto x : v) cout << x << " " << endl;
}
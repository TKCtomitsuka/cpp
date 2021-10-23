#include <iostream>
#include <unordered_set>

using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  unordered_set<ll> s;
  for (long long j = 2; j * j <= N; j++) {
    ll x = j * j;
    while (x <= N) {
      s.insert(x);
      x *= j;
    }
  }
  cout << N - s.size() << endl;
}
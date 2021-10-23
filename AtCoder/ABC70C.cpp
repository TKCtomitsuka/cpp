#include <bits/stdc++.h>

#include <numeric>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) { return (a % b) ? gcd(b, a % b) : b; }  //最大公約数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }            //最小公倍数

int main() {
  int N;
  cin >> N;
  vector<ll> T(N);
  cin >> T[0];
  for (int i = 1; i < (int)T.size(); i++) {
    cin >> T[i];
    T[i] = lcm(T[i - 1], T[i]);
  }
  cout << T[N - 1] << endl;
}
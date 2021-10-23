#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  set<int> st;
  for (int i = 0; i < d.size(); i++) {
    cin >> d[i];
    st.insert(d[i]);
  }
  cout << st.size() << endl;
}
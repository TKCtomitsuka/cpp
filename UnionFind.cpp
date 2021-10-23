#ifndef UNIONFIND_h
#define UNIONFIND_h

#include <iostream>
#include <vector>

class UnionFind {
 private:
  std::vector<int> par;  // parent of i
  std::vector<int> rank;

 public:
  UnionFind(int N) : par(N), rank(N) {  // initilization of i as root
    for (int i = 0; i < N; ++i) par[i] = i, rank[i] = 0;
  }

  int find(int x) {  // find the root of x
    if (par[x] == x) {
      return x;
    } else {
      return par[x] = find(par[x]);
    }
  }

  void unite(int x, int y) {  // unite the set of x and y
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (rank[x] < rank[y]) {
      par[x] = y;
    } else {
      par[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }

  bool is_same(int x, int y) {
    return find(x) == find(y);
  }  // x and y are in the same set?
};

#endif
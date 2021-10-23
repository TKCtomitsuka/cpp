#include <iostream>
#include <vector>

int MAX_V;

struct edge {
  int to, cost;
};

std::vector<edge> G(MAX_V);

int main() {
  int V, E;  // V:頂点数, E:辺の数
  std::cin >> V >> E;
  for (int i = 0; i < E; ++i) {
    int s, t, cos;  // (s→tへのコスト)
    std::cin >> s >> t >> cos;
    G[s].cost = cos;
    G[s].to = t;
  }
}

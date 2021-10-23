#include <climits>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int V;

int min_ver(vector<int> key, vector<bool> mst_set) {
  int min = INT_MAX, min_index;
  for (int v = 0; v < V; ++v) {
    if (mst_set[v] == false && key[v] < min) {
      min_index = v;
      min = key[v];
    }
  }
  return min_index;
}

void printMST(vector<int> parent, vector<vector<int>> G) {
  cout << "Edge \tWeight\n";
  for (int i = 1; i < V; i++)
    cout << parent[i] << " - " << i << " \t" << G[i][parent[i]] << " \n";
}

void prim(vector<vector<int>> G) {
  vector<int> key(V);
  vector<bool> mst_set(V);
  vector<int> parent(V);
  for (int i = 0; i < V; ++i) {
    key[i] = INT_MAX;
    mst_set[i] = false;
  }
  key[0] = 0;
  parent[0] = -1;

  for (int j = 0; j < V - 1; ++j) {
    int u = min_ver(key, mst_set);

    mst_set[u] = true;

    for (int v = 0; v < V; ++v) {
      if (mst_set[v] == false && G[u][v] != 0 && key[v] > G[u][v]) {
        key[v] = G[u][v];
        parent[v] = u;
      }
    }
  }
  printMST(parent, G);
}

int main() {
  cin >> V;
  vector<vector<int>> G(V, vector<int>(V, 0));
  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < V; ++j) {
      cin >> G[i][j];
    }
  }

  prim(G);
}
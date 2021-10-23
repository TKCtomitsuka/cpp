#include <iostream>
#include <vector>

using ll = long long;

int main() {
  int N;
  std::cin >> N;
  std::vector<std::vector<ll> > D(N + 1, std::vector<ll>(N));

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      std::cin >> D[i][j];
    }
  }
  std::vector<std::vector<ll> > CS(N + 1,
                                   std::vector<ll>(N + 1)); /*Cumulative Sum */

  for (int x = 0; x < N; x++) {
    for (int y = 0; y < N; y++) {
      CS[x + 1][y + 1] = CS[x][y + 1] + CS[x + 1][y] - CS[x][y] + D[x][y];
    }
  }
  std::vector<ll> maxval(N * N);

  for (int xl = 0; xl < N; xl++) {
    for (int xh = xl + 1; xh <= N; xh++) {
      for (int yl = 0; yl < N; yl++) {
        for (int yh = yl + 1; yh <= N; yh++) {
          ll A = (xh - xl) * (yh - yl);
          ll sum = CS[xh][yh] - CS[xl][yh] - CS[xh][yl] + CS[xl][yl];
          maxval[A] = std::max(maxval[A], sum);
        }
      }
    }
  }
  for (int s = 0; s < N * N; s++) {
    maxval[s + 1] = std::max(maxval[s + 1], maxval[s]);
  }

  ll Q;
  std::cin >> Q;
  std::vector<ll> P(Q);
  for (int i = 0; i < Q; i++) {
    std::cin >> P[i];
  }
  for (int j = 0; j < Q; j++) {
    std::cout << maxval[P[j]] << std::endl;
  }
}

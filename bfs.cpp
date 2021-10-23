#include <vector>
#include <iostream>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, M; //N:ノード数, M:辺の数
    cin >> N >> M;
    vector<vector<int>> G(N); //グラフを定義
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b); //G[a]の成分はaと繋がるノード
        G[b].push_back(a); //無向グラフならon
    }

    vector<int> dist(N, -1); //各ノードの０ノードからの距離を格納
    queue<int> que;          //訪問予定のノードを入れるキュー

    //ノード0の初期化
    dist[0] = 0;
    que.push(0);

    while (!que.empty()) //キューが空になるまで
    {
        int v = que.front(); //キューの先頭
        que.pop();           //キューから削除

        for (int nv : G[v]) //vからいけるノードを探索
        {
            if (dist[nv] != -1) //探索済みなら何もしない
                continue;
            //距離を更新しキューに追加
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    for (int v = 0; v < N; ++v)
    {
        cout << v << ":" << dist[v] << endl;
    }
}
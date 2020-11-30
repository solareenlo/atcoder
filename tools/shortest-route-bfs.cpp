// 幅優先探索でグリッド状の map における
// from から to への最短歩数を返す関数
#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
using VI = vector<int>;
using VVI = vector<vector<int> >;
using QP = queue<P>;
constexpr int DX[4] = {1, 0, -1, 0};
constexpr int DY[4] = {0, 1, 0, -1};

inline int calDist(P from, P to, VVI map) {
    int height = map.size();
    int width = map[0].size();

    /* 幅優先探索の初期設定 */
    VVI dist(height, VI(width, -1)); // 各セルの最短距離 (訪れていないところは -1 としておく)
    dist[from.second][from.first] = 0; // スタートを 0 に設定
    QP que; // 「一度見た頂点」のうち「まだ訪れていない頂点」を表すキュー
    que.push(make_pair(from.first, from.second)); // スタートを push

    /* キューが空になるまで */
    while (!que.empty()) {
        P currentPos = que.front(); // キューの先頭を見る
        int x = currentPos.first;
        int y = currentPos.second;
        que.pop(); // キューから先頭を pop する

        // 隣接頂点を探索
        REP(direction, 4) {
            int nextX = x + DX[direction];
            int nextY = y + DY[direction];
            if (nextX < 0 || nextX >= width || nextY < 0 || nextY >= height)
                continue; // 場外アウトはだめ
            if (map[nextY][nextX] == 0)
                continue; // 壁はだめ
            // まだ見ていない頂点なら push
            if (dist[nextY][nextX] == -1) {
                que.push(make_pair(nextX, nextY));
                dist[nextY][nextX] = dist[y][x] + 1; // next の距離も更新
            }
        }
    }
    // REP(i, height) {
    //     REP(j, width)
    //         cout << setw(2) << dist[i][j] << ' ';
    //     cout << endl;
    // }
    return dist[to.second][to.first];
}

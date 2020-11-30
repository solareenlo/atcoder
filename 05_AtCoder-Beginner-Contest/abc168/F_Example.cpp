#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
using ll = long long;

// 実際の座標を保存しておくための構造体
struct L {
    int a, b, c;
    L(int a = 0, int b = 0, int c = 0): a(a), b(b), c(c) {}
};

// 上下左右に１マスずつ移動するための配列
// dx と dy は1つ要素がズレてるだけ．
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    // map の first には実際の座標が入り，
    // second には座標圧縮用のインデックスが入る
    map<int , int> mapX, mapY;
    mapX[0] = 0;
    mapY[0] = 0;

    // 実際の座標読み込み
    vector<L> lineH, lineV;
    REP(i, n) {
        int a, b, c;
        cin >> a >> b >> c;
        mapX[a] = 0;
        mapX[b] = 0;
        mapY[c] = 0;
        lineH.emplace_back(a, b, c);
    }
    REP(i, m) {
        int a, b, c;
        cin >> c >> a >> b;
        mapY[a] = 0;
        mapY[b] = 0;
        mapX[c] = 0;
        lineV.emplace_back(a, b, c);
    }

    // 圧縮用のマップ作成
    // 画像圧縮とは x が左から何本目ですか？が分かれば良い．
    vector<int> xs, ys; // 元の座標を求める用の座標
    for (auto& p : mapX) { // xs[i] とすると元のマップでの座標が分かる
        p.second = xs.size(); // p.second には元の x 座標のインデックスが入る
        xs.push_back(p.first); // p.first には元の x 座標が入っている
    }
    for (auto& p : mapY) {
        p.second = ys.size(); // p.second には元の y 座標のインデックスが入る
        ys.push_back(p.first); // p.first には元の y 座標が入っている
    }

    // 扱うグリッド
    // 壁と普通のマス目で2倍にする
    int h = xs.size() * 2;
    int w = ys.size() * 2;

    vector<vector<int> > d(h, vector<int>(w)); // bfs 用の配列

    // それぞれの線分を引いていく
    // 横線を引く
    REP(i, n) {
        int a = mapX[lineH[i].a] * 2;
        int b = mapX[lineH[i].b] * 2;
        int c = mapY[lineH[i].c] * 2;
        for (int x = a; x <= b; x++)
            d[x][c] = -1; // 壁は -1
    }
    // 縦線を引く
    REP(i, m) {
        int a = mapY[lineV[i].a] * 2;
        int b = mapY[lineV[i].b] * 2;
        int c = mapX[lineV[i].c] * 2;
        for (int y = a; y <= b; y++)
            d[c][y] = -1; // 壁は -1
    }

    // bfs 開始
    queue<P> q;
    int sx = mapX[0] * 2;
    int sy = mapY[0] * 2;
    d[sx][sy] = 1; // たどり着けのを1とする
    q.emplace(sx, sy);
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // 上下左右を見る
        REP(v, 4) {
            int nextX = x + dx[v];
            int nextY = y + dy[v];
            if (nextX < 0 || nextX >= h) continue ;
            if (nextY < 0 || nextY >= w) continue ;
            if (d[nextX][nextY] != 0) continue ;
            d[nextX][nextY] = 1; // 到達可能なら1
            q.emplace(nextX, nextY);
        }
    }

    ll ans = 0;
    // 全部のマスを確認する
    REP(x, h) REP(y, w) {
        if (d[x][y] != 1) continue ; // そのマスが到達不可能であれば無視する
        if (x == 0 || x == h - 1 || y == 0 || y == w -1) { // 端に到達すれば INF
            cout << "INF" << '\n';
            return 0;
        }
        // x か y が偶数なら壁なので飛ばす
        // 横線・縦線を引くところで2倍しているので偶数が壁になる
        if (x % 2 == 0 || y % 2 == 0) continue ; // 今いるところが壁の行なら飛ばす
        ll ex = xs[x / 2 + 1] - xs[x / 2];  // xs[x / 2] が今いる場所の左下の元の座標
        ll ey = ys[y / 2 + 1] - ys[y / 2];
        ans += ex * ey;
    }
    cout << ans << '\n';
    return 0;
}

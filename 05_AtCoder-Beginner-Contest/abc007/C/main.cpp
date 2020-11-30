#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int r, c; cin >> r >> c;
    int sy, sx; cin >> sy >> sx;
    sy--; sx--;
    int gy, gx; cin >> gy >> gx;
    gy--; gx--;
    vector<vector<char> > m(r, vector<char>(c));
    REP(i, r) REP(j, c) cin >> m[i][j];

    vector<vector<int> > d(r, vector<int>(c, -1));
    d[sy][sx] = 0;

    queue<P> q;
    q.push(make_pair(sy, sx));

    while (!q.empty()) {
        P pos = q.front();
        int y = pos.first;
        int x = pos.second;
        q.pop();

        REP(i, 4) {
            int next_y = y + dy[i];
            int next_x = x + dx[i];
            if (next_y < 0 || next_y >= r || next_x < 0 || next_x >= c) continue ;
            if (m[next_y][next_x] == '#') continue ;

            if (d[next_y][next_x] == -1) {
                q.push(make_pair(next_y, next_x));
                d[next_y][next_x] = d[y][x] + 1;
            }
        }
    }

    cout << d[gy][gx] << '\n';
    return 0;
}

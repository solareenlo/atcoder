#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main() {
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
    q.push({sy, sx});

    while (!q.empty()) {
        P pos = q.front();
        int y = pos.first;
        int x = pos.second;
        q.pop();

        REP(i, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue ;
            if (m[ny][nx] == '#') continue ;

            if (d[ny][nx] == -1) {
                q.push({ny, nx});
                d[ny][nx] = d[y][x] + 1;
            }
        }
    }

    cout << d[gy][gx] << '\n';
    return 0;
}

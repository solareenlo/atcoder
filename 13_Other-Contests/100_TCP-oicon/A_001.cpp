#include <string>
#include <iostream>
#include <cstring>
#include <queue>
#include <tuple>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)

const int dx[] = {0, -1, 0, 1};
const int dy[] = {1, 0, -1, 0};
const int INF = 1<<29;

int main() {
    int h, w; std::cin >> h >> w;
    std::string line[h];
    REP(i, h) std::cin >> line[i];

    int sx, sy, gx, gy;
    sx = sy = gx = gy = 0;
    REP(i, h) REP(j, w) {
        if (line[i][j] == 'S') sx = i, sy = j;
        if (line[i][j] == 'G') gx = i, gy = j;
    }

    std::vector meiro(2, std::vector(h, std::vector(w, INF)));
    REP(i, 2) {
        int x0, y0;
        if (i == 0) {
            x0 = sx, y0 = sy;
        } else {
            x0 = gx, y0 = gy;
        }
        meiro[i][x0][y0] = 0;
        std::queue<std::pair<int, int> > q;
        q.emplace(x0, y0);
        while (!q.empty()) {
            int x, y;
            std::tie(x, y) = q.front();
            q.pop();
            REP(j, 4) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx < 0 || h <= nx || ny < 0 || w <= ny)
                    continue;
                if (line[nx][ny] == '#')
                    continue;
                if (meiro[i][nx][ny] != INF)
                    continue;
                meiro[i][nx][ny] = meiro[i][x][y] + 1;
                q.emplace(nx, ny);
            }
        }
    }

    int res = 0;
    REP(i, h) REP(j, w) if (line[i][j] == '#') {
        int res1 = INF, res2 = INF;
        REP(k, 4) {
            int x = i + dx[k];
            int y = j + dy[k];
            if (0 <= x && x < h && 0 <= y && y < w && line[x][y] != '#') {
                res1 = std::min(res1, meiro[0][x][y]);
                res2 = std::min(res2, meiro[1][x][y]);
            }
        }
        if (res1 < INF && res2 < INF)
            res = std::max(res, res1 + res2 + 2);
    }
    std::cout << res << std::endl;
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int main() {
	int w, h, p, x, y;
	while (cin >> w >> h >> p, w || h || p) {
		int z[h][w];
		REP(i, h) REP(j, w) cin >> z[i][j];
		bool visited[h][w];
		bzero(visited, sizeof(visited));
		queue<P> q;
		REP(i, p) {
			cin >> x >> y;
			q.push({y, x});
			visited[y][x] = true;
		}
		while (!q.empty()) {
			tie(y, x) = q.front(); q.pop();
			REP(i, 4) {
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (0<=ny && ny<h && 0<=nx && nx<w && z[ny][nx]<z[y][x] && !visited[ny][nx]) {
					visited[ny][nx] = true;
					q.push({ny, nx});
				}
			}
		}
		int res = 0;
		REP(i, h) REP(j, w)
			if (visited[i][j]) res++;
		cout << res << '\n';
	}
	return 0;
}

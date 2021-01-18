#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int w, h, p, d[21][21];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool visited[21][21];

void dfs(int x, int y) {
	if (visited[y][x]) return ;
	visited[y][x] = true;
	REP(i, 4) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0<=nx && nx<w && 0<=ny && ny<h && d[y][x]>d[ny][nx] && !visited[ny][nx])
			dfs(nx, ny);
	}
}

int main() {
	while (cin >> w >> h >> p, w || h || p) {
		REP(i, h) REP(j, w) cin >> d[i][j];
		bzero(visited, sizeof(visited));
		REP(i, p) {
			int x, y; cin >> x >> y;
			dfs(x, y);
		}
		int res = 0;
		REP(i, h) REP(j, w)
			if (visited[i][j]) res++;
		cout << res << '\n';
	}
	return 0;
}

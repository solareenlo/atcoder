#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, -1, 0, 1};
int dis[1005][1005];
int vis[1005][1005];
vector<pair<int, int> > que;

int main() {
	int h, w; cin >> h >> w;
	REP(i, h) REP(j, w) {
		char c; cin >> c;
		if (c == '#') {
			que.emplace_back(i, j);
			vis[i][j] = 1;
			dis[i][j] = 0;
		}
	}
	int res = 0;
	REP(i, (int)que.size()) {
		int y = que[i].first;
		int x = que[i].second;
		REP(j, 4) {
			int ny = y + dy[j];
			int nx = x + dx[j];
			if (0 <= ny && ny < h && 0 <= nx && nx < w && !vis[ny][nx]) {
				vis[ny][nx] = 1;
				dis[ny][nx] = dis[y][x] + 1;
				que.emplace_back(ny, nx);
				res = max(res, dis[ny][nx]);
			}
		}
	}
	cout << res << '\n';
	return 0;
}

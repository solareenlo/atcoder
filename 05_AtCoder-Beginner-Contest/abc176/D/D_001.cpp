#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};
const int INF = 1000000000;

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int h, w; cin >> h >> w;
	int Cy, Cx; cin >> Cy >> Cx;
	int	Dy, Dx; cin >> Dy >> Dx;
	Cy--, Cx--, Dy--, Dx--;
	vector<string> s(h);
	REP(i, h) cin >> s[i];
	vector<vector<int> > dist(h, vector<int>(w, INF));
	deque<P> q;
	dist[Cy][Cx] = 0;
	q.emplace_back(Cy, Cx);
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop_front();
		int d = dist[y][x];
		if (dist[y][x] != d) continue ;
		REP(i, 4) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue ;
			if (s[ny][nx] == '#') continue ;
			if (dist[ny][nx] <= d) continue ;
			dist[ny][nx] = d;
			q.emplace_front(ny, nx);
		}
		for (int dx2 = -2; dx2 <= 2; dx2++) {
			for (int dy2 = -2; dy2 <=2; dy2++) {
				int nx = x + dx2;
				int ny = y + dy2;
				if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue ;
				if (s[ny][nx] == '#') continue ;
				if (dist[ny][nx] <= d+1) continue ;
				dist[ny][nx] = d+1;
				q.emplace_back(ny, nx);
			}
		}
	}
	int res = dist[Dy][Dx];
	if (res == INF) res = -1;
	cout << res << '\n';
    return 0;
}

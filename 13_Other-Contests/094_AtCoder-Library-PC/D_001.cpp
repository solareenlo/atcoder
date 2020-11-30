#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int main() {
	int n, m; cin >> n >> m;
	vector<string> grid(n);
	REP(i, n) cin >> grid[i];

	/*
	 * generate (s -> even grid -> odd grid -> t) graph
	 * grid(i, j) correspond to vertex (i * m + j)
	*/
	mf_graph<int> g(n * m + 2);
	int s = n * m;
	int t = n * m + 1;

	// s -> even / odd -> t
	REP(y, n) REP(x, m) {
		if (grid[y][x] == '#') continue ;
		int v = y * m + x;
		if ((x + y) % 2) g.add_edge(v, t, 1);
		else g.add_edge(s, v, 1);
	}

	// even -> odd
	REP(y, n) REP(x, m) {
		if (grid[y][x] == '#' || (x + y) % 2) continue ;
		int v = y * m + x;
		REP(i, 4) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nv = ny * m + nx;
			if (nx < 0 || nx >= m || ny < 0 || ny >= n || grid[y][x] == '#') continue ;
			g.add_edge(v, nv, 1);
		}
	}

	cout << g.flow(s, t) << '\n';

	for (auto e : g.edges()) {
		if (!e.flow || e.from == s || e.to == t) continue ;
		int sx = e.from % m, sy = e.from / m;
		int tx = e.to % m, ty = e.to / m;
		if (sx == tx + 1) grid[ty][tx] = '>', grid[sy][sx] = '<';
		if (sy == ty + 1) grid[ty][tx] = 'v', grid[sy][sx] = '^';
		if (sx == tx - 1) grid[ty][tx] = '<', grid[sy][sx] = '>';
		if (sy == ty - 1) grid[ty][tx] = '^', grid[sy][sx] = 'v';
	}

	REP(i, n) cout << grid[i] << '\n';
	return 0;
}

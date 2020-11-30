#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct Edge {
	int to; // その点と繋がってる点の情報
	int id; // その頂点の id
};
vector<vector<Edge> > g;
vector<int> res;

// p: 親の座標
// c: 自分と親との辺の色
void dfs(int v, int c, int p) {
	int k = 1;
	REP(i, g[v].size()) {
		int u = g[v][i].to;
		int ei = g[v][i].id;
		if (u == p) continue ;
		if (k == c) k++;
		res[ei] = k++;
		dfs(u, res[ei], v);
	}
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;

	g.resize(n);
	res.resize(n - 1);
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		a--, b--;
		g[a].push_back((Edge){b, i});
		g[b].push_back((Edge){a, i});
	}

	dfs(0, -1, -1);

	int maxi = 0;
	REP(i, n) maxi = max(maxi, int(g[i].size()));
	cout << maxi << '\n';
	REP(i, n - 1) cout << res[i] << '\n';
	return 0;
}

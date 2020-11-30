#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

struct Edge { int to, id; };
vector<vector<Edge> > g;
vector<int> res;

void dfs(int from, int color, int parent) {
	int k = 1;
	REP(i, g[from].size()) {
		int to = g[from][i].to;
		int id = g[from][i].id;
		if (to == parent) continue ;
		if (k == color) k++;
		res[id] = k++;
		dfs(to, res[id], from);
	}
}

int main() {
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
	REP(i, n) maxi = max(maxi, (int)g[i].size());
	cout << maxi << '\n';
	REP(i, n - 1) cout << res[i] << '\n';
	return 0;
}

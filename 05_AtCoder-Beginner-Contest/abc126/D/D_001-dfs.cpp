#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

vector<vector<P> > G;
vector<int> RES;

void dfs(int now, int pre, int color) {
	RES[now] = color;
	for (auto g : G[now])
		if (g.first != pre)
			dfs(g.first, now, color^(g.second & 1));
}

int main() {
	int n; cin >> n;
	G.resize(n);
	RES.resize(n);
	while (--n) {
		int u, v, w; cin >> u >> v >> w; u--; v--;
		G[u].push_back(make_pair(v, w));
		G[v].push_back(make_pair(u, w));
	}
	dfs(0, -1, 0);
	for (int a : RES) cout << a << '\n';
	return 0;
}

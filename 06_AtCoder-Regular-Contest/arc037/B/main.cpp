#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using Graph = vector<vector<int> >;

bool ok;

vector<bool> seen;
void dfs(const Graph &G, int v, int prev_v) {
	seen[v] = true;
	for (auto next_v : G[v]) {
		if (seen[next_v]) {
			if (next_v != prev_v)
				ok = false;
			continue ;
		}
		dfs(G, next_v, v);
	}
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;

	Graph G(n);
	REP(i, m) {
		int u, v; cin >> u >> v;
		u--; v--;
		G[u].push_back(v);
		G[v].push_back(u);
	}

	int cnt = 0;
	seen.assign(n, false);
	REP(i, n) {
		ok = true;
		if (seen[i]) continue ;
		dfs(G, i, -1);
		if (ok) cnt++;
	}

	cout << cnt << '\n';
    return 0;
}

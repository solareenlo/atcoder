#include <bits/stdc++.h>
using namespace std;
#define int int64_t

signed main() {
	int n, m, x, y; cin >> n >> m >> x >> y;
	vector<tuple<int, int, int>> g[n+1];
	while (m--) {
		int u, v, t, k; cin >> u >> v >> t >> k;
		g[u].push_back({v, t, k});
		g[v].push_back({u, t, k});
	}
	vector<int> dist(n+1, -1);
	priority_queue<int> q;
	q.push(x);
	dist[x] = 0;
	while (!q.empty()) {
		int u = q.top(); q.pop();
		for (auto [v, t, k] : g[u]) {
			int now = ((dist[u]+k-1)/k)*k+t;
			if (dist[v] == -1 || dist[v] > now) {
				dist[v]  = now;
				q.push(v);
			}
		}
	}
	cout << dist[y] << '\n';
    return 0;
}

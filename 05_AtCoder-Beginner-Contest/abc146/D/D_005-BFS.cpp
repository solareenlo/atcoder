#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n; cin >> n;
	vector<vector<P> > g(n);
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		a--, b--;
		g[a].push_back({b, i});
		g[b].push_back({a, i});
	}
	int maxi = 0;
	vector<int> color(n);
	color[0] = -1;
	vector<int> res(n - 1);
	queue<int> q;
	q.push(0);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		int c = 0;
		for (auto [u, id] : g[v]) {
			if (color[u]) continue ;
			q.push(u);
			c++;
			if (c == color[v]) c++;
			res[id] = c;
			color[u] = c;
			maxi = max(maxi, c);
		}
	}
	cout << maxi << '\n';
	REP(i, n - 1) cout << res[i] << '\n';
	return 0;
}

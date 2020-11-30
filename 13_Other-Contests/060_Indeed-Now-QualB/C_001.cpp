#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int> > g(n);
	REP(i, n - 1) {
		int a, b; cin >> a >> b;
		g[--a].emplace_back(--b);
		g[b].emplace_back(a);
	}
	vector<int> res;
	priority_queue<int, vector<int>, greater<int> > que;
	que.emplace(0);
	vector<bool> seen(n, false);
	seen[0] = true;
	while (!que.empty()) {
		int u = que.top();
		que.pop();
		res.emplace_back(u + 1);
		for (auto v : g[u]) {
			if (seen[v]) continue ;
			seen[v] = true;
			que.emplace(v);
		}
	}
	REP(i, n - 1)
		cout << res[i] << " ";
	cout << res[n - 1] << '\n';
	return 0;
}

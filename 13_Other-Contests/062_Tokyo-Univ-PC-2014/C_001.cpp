#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> g[n];
	for (int i=0; i<n; i++) {
		int a, b; cin >> a >> b;
		g[--a].push_back(--b);
		g[b].push_back(a);
	}
	int l = 0;
	vector<int> dp(n, -1);
	function<void(int, int)> dfs = [&](int node, int prev) {
		if (dp[node] != -1) {
			l = dp[node] - dp[prev] + 1;
			return ;
		}
		dp[node] = dp[prev] + 1;
		for (int next : g[node]) if (next != prev)
			dfs(next, node);
	};
	dfs(0, 0);
	cout << 1+(l==n) << " " << (l%2?n-1:n) << '\n';
	return 0;
}

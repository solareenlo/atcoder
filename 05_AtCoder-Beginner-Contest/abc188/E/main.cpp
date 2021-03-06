#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n];
	for (int &x : a) cin >> x;
	vector<int> G[n];
	while (m--) {
		int x, y; cin >> x >> y;
		G[--x].push_back(--y);
	}
	vector<int> dp(n, 2e9);
	int maxi = -2e9;
	for (int i = 0; i < n; i++) {
		for (int j : G[i])
			dp[j] = min(dp[j], min(dp[i], a[i]));
		if (dp[i] != 2e9)
			maxi = max(maxi, a[i] - dp[i]);
	}
	cout << maxi << '\n';
	return 0;
}

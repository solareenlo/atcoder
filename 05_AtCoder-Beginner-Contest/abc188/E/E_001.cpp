#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n];
	for (int &x : a) cin >> x;
	vector<int> G[n];
	while (m--) {
		int x, y; cin >> x >> y;
		G[x-1].push_back(y-1);
	}
	vector<int> dp(n, 2e9);
	int maxi = -2e9;
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, a[i] - dp[i]);
		dp[i] = min(dp[i], a[i]);
		for (int j : G[i])
			dp[j] = min(dp[j], dp[i]);
	}
	cout << maxi << '\n';
    return 0;
}

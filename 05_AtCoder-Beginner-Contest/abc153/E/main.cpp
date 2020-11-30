#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int h, n; cin >> h >> n;
	vector<int> dp(h + 1, INT_MAX);
	dp[0] = 0;
	while (n--) {
		int a, b; cin >> a >> b;
		for (int i = 1; i <= h; i++)
			dp[i] = min(dp[i], max(dp[i-a], 0) + b);
	}
	cout << dp[h] << '\n';
}

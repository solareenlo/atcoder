#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	if (n == 2) {
		cout << "0 0" << '\n';
		return 0;
	}

	int g[n][n];
	REP(i, n-1) for (int j = i+1; j < n; j++) {
		cin >> g[i][j];
		g[j][i] = g[i][j];
	}
	REP(i, n) g[i][i] = 0;

	int dp[n][n][1<<n];
	REP(i, n) REP(j, n) REP(k, 1<<n) dp[i][j][k] = 1e9;
	REP(i, n) dp[i][i][0] = dp[i][i][1<<i] = 0;

	REP(i, 1<<n) REP(j, n) if (i & 1<<j) {
		int bit = i^1<<j;
		REP(k, n) if (bit & 1<<k) REP(l, n) if (bit & 1<<l)
			dp[l][j][i] = min(dp[l][k][bit] + g[k][j], dp[l][j][i]);
	}

	int res = 1e9;
	REP(i, n) REP(j, n) if (i!=j)
		res = min(res, dp[i][j][(1<<n)-1] + g[i][j]);
	cout << n << " " << res << '\n';
	return 0;
}

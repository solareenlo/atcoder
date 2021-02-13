#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	if (n == 2) {
		cout << "0 0" << '\n';
		return 0;
	}

	int g[15][15] = {};
	REP(i, n-1) for (int j = i+1; j < n; j++) {
		cin >> g[i][j];
		g[j][i] = g[i][j];
	}

	int dp[1<<15][15];
	REP(i, 1<<15) REP(j, n) dp[i][j] = 1e9;
	dp[1][0] = 0;
	REP(i, 1<<n) REP(j, n) if (i>>j&1) REP(k, n) if ((~i>>k)&1)
		dp[i|1<<k][k] = min(dp[i|1<<k][k], dp[i][j]+g[j][k]);

	int res = 1e9;
	REP(i, n) res = min(res, dp[(1<<n)-1][i]+g[i][0]);
	cout << n << " " << res << '\n';
	return 0;
}

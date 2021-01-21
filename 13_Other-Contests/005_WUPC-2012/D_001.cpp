#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a[n][n], dp[n][n];
	bzero(a, sizeof(a));
	bzero(dp, sizeof(dp));
	REP(i, n) REP(j, i+1) cin >> a[i][j];
	dp[0][0] = a[0][0];
	REP(i, n) REP(j, n) {
		if (i > 0)
			dp[i][j] = max(a[i][j], a[i][j] + dp[i-1][j]);
		if (i > 0 && j > 0)
			dp[i][j] = max(dp[i][j], a[i][j] + dp[i-1][j-1]);
	}
	int res = 0;
	REP(i, n) res = max(res, dp[n-1][i]);
	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1001001001;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n), z(n);
	REP(i, n) cin >> x[i] >> y[i] >> z[i];
	vector<vector<int> > dp(1<<n, vector<int>(n, INF));
	dp[0][0] = 0;
	REP(i, 1<<n) REP(j, n) REP(k, n) {
		int dist = abs(x[k]-x[j]) + abs(y[k]-y[j]) + max(0, z[j]-z[k]);
		dp[i|(1<<k)][k] = min(dp[i|(1<<k)][k], dp[i][j] + dist);
	}
	cout << dp[(1<<n)-1][0] << '\n';
	return 0;
}

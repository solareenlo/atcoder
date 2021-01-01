#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	int a, b; cin >> a >> b; a--; b--;
	int m; cin >> m;
	vector<int> d[n];
	REP(i, m) {
		int x, y; cin >> x >> y; x--; y--;
		d[x].push_back(y);
		d[y].push_back(x);
	}
	int dp[n+1][n];
	memset(dp, 0, sizeof(dp));
	dp[0][a] = 1;
	REP(i, n) REP(j, n) {
		if (dp[i][j] == 0) continue ;
		if (j == b) {
			cout << dp[i][j] << '\n';
			return 0;
		}
		REP(k, (int)(d[j].size())) {
			int to = d[j][k];
			(dp[i+1][to] += dp[i][j]) %= (int)(1e9+7);
		}
	}
    return 0;
}

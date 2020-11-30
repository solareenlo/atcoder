#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1000000007;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int> > v(n, vector<int>(k + 1, 0));
	REP(i, n) REP(j, k) cin >> v[i][j+1];
	vector<vector<int> > dp(n, vector<int>(k + 1, 0));
	REP(i, k) dp[0][i + 1] = i + 1;
	REP(i, n - 1) REP(j, k) {
		int x = upper_bound(v[i].begin(), v[i].end(), v[i+1][j+1]) - v[i].begin() - 1;
		dp[i+1][j+1] = dp[i+1][j] + dp[i][x];
		dp[i+1][j+1] %= MOD;
	}
	cout << dp[n-1][k] << '\n';
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

int main() {
	int n, k; cin >> n >> k;
	vector<vector<int> > a(n, vector<int>(k));
	REP(i, n) REP(j, k) cin >> a[i][j];

	vector<vector<mint> > dp(n, vector<mint>(k + 1));
	REP(i, k) dp[0][i] = 1;

	for (int i = 1; i < n; i++) {
		REP(j, k) {
			int x = lower_bound(a[i].begin(), a[i].end(), a[i-1][j]) - a[i].begin();
			dp[i][x] += dp[i-1][j];
		}
		REP(j, k) dp[i][j+1] += dp[i][j];
	}
	mint res = 0;
	REP(i, k) res += dp[n-1][i];
	cout << res.val() << '\n';
	return 0;
}

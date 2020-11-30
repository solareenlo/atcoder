#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 998244353;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> l(k), r(k);
	REP(i, k) cin >> l[i] >> r[i];
	REP(i, k) r[i]++;

	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	dp[1] = -1;
	// 配る DP
	REP(i, n) {
		if (i > 0)
			dp[i] = (dp[i - 1] + dp[i]) % MOD;
		REP(j, k) {
			if (i + l[j] < n)
				dp[i + l[j]] = (dp[i + l[j]] + dp[i]) % MOD;
			if (i + r[j] < n)
				dp[i + r[j]] = (((dp[i + r[j]] - dp[i]) % MOD) + MOD) % MOD;
		}
	}
	cout << dp[n - 1] << '\n';
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 998244353;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> l(k), r(k);
	REP(i, k) cin >> l[i] >> r[i];
	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	dp[1] = -1; // テトリス累積和
	REP(i, n) { // 配る DP
		dp[i+1] += dp[i];
		dp[i+1] %= MOD;
		REP(j, k) {
			if (i + l[j] < n) {
				dp[i+l[j]] += dp[i];
				dp[i+l[j]] %= MOD;
			}
			if (i + r[j] + 1 < n) {
				dp[i+r[j]+1] -= dp[i];
				dp[i+r[j]+1] %= MOD;
				dp[i+r[j]+1] += MOD;
				dp[i+r[j]+1] %= MOD;
			}
		}
	}
	cout << dp[n-1] << '\n';
	return 0;
}

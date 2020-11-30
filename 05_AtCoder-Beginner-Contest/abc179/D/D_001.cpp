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
	dp[1] = 1;
	vector<int> s(n + 1, 0); // 累積和
	s[1] = 1;
	// 貰う DP
	for (int i = 2; i <= n; i++) {
		REP(j, k) {
			// l[i] ~ r[i] を増加させる
			int li = i - r[j]; // 足すべき場所の左端
			int ri = i - l[j]; // 足すべき場所の右端
			if (ri < 0) continue ;
			li = max(li, 1);
			dp[i] += (((s[ri] - s[li - 1]) % MOD) + MOD) % MOD;
			dp[i] %= MOD;
		}
		// 累積和の更新
		s[i] = (s[i - 1] + dp[i]) % MOD;
	}
	cout << dp[n] << '\n';
    return 0;
}

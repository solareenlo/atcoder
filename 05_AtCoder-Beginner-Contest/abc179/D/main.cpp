#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 998244353;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;
	vector<int> L(k), R(k);
	REP(i, k) cin >> L[i] >> R[i];
	vector<int> dp(n + 1, 0), s(n + 1, 0);
	dp[1] = s[1] = 1;
	for(int i = 2; i <= n; i++) {
		REP(j, k) {
			// L[i] ~ R[i] 分を増加させる
			int l = i - R[j]; // 足すべき場所の左端
			int r = i - L[j]; // 足すべき場所の右端
			if (r < 1) continue ;
			l = max(l, 1);
			int sum = s[r] - s[l-1];
			sum %= MOD;
			sum += MOD;
			sum %= MOD;
			dp[i] += sum;
			dp[i] %= MOD;
		}
		s[i] = s[i-1] + dp[i]; // 累積和の更新
		s[i] %= MOD;
	}
	cout << dp[n] << '\n';
	return 0;
}

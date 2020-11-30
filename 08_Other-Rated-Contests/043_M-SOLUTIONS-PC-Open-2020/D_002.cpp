#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll n; cin >> n;
	vector<ll> a(n);
	REP(i, n) cin >> a[i];

	// 動的計画法
	vector<ll> dp(n);
	// dp[i]: x 日目に，株の売却が終了した時点の所持金の最大値
	dp[0] = 1000;
	for (int i = 1; i < n; i++) {
		dp[i] = dp[i - 1];
		REP(j, i) {
			ll stock = dp[j] / a[j];
			ll money = dp[j] + (a[i] - a[j]) * stock;
			dp[i] = max(dp[i], money);
		}
	}

	cout << dp[n - 1] << '\n';
	return 0;
}

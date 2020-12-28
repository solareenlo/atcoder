#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
const int MOD = 1e9 + 7;
int c[200002], dp[200002], sum[200002];
int main() {
	int n; cin >> n;
	REP(i, n) cin >> c[i];
	dp[0] = 1;
	REP(i, n) {
		if (c[i] != c[i-1]) (sum[c[i]] += dp[i-1]) %= MOD;
		dp[i] = sum[c[i]] % MOD;
	}
	cout << dp[n] << '\n';
	return 0;
}

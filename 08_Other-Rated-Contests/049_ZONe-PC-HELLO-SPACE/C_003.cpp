#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector dp(4, vector(1<<5, 0));
	dp[0][0] = 1e9;
	while (n--) {
		auto dp2 = dp;
		REP(i, 5) {
			int a; cin >> a;
			REP(j, 3) REP(k, 1<<5) if (k&1<<i)
				dp2[j][k] = max(dp2[j][k], min(dp2[j][k^1<<i], a));
		}
		REP(j, 3) REP(k, 1<<5)
			dp[j+1][k] = max(dp[j+1][k], dp2[j][k]);
	}
	cout << dp[3][(1<<5)-1] << '\n';
	return 0;
}

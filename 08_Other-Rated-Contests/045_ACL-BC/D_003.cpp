#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	REP(i, n) cin >> a[i];
	vector<int> dp(n, 0);
	REP(i, n) for (int j = max(0, i - 100); j < i; j++) {
		if (abs(a[i] - a[j]) <= k)
			dp[i] = max(dp[i], dp[j] + 1);
	}
	int res = 0;
	REP(i, n)
		res = max(res, dp[i]);
	cout << res + 1 << '\n';
	return 0;
}

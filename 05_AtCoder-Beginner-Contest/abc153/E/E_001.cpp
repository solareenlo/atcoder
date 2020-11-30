#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, n; cin >> h >> n;
	vector<int> a(n), b(n);
	REP(i, n) cin >> a[i] >> b[i];

	vector<int> dp(h + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= h; i++)
		REP(j, n)
			dp[i] = min(dp[i], dp[max(0, i-a[j])] + b[j]);
	cout << dp[h] << '\n';
    return 0;
}

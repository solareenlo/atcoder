#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1000000007;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int m = size(s);
	vector<string> t(n);
	REP(i, n) cin >> t[i];

	vector<ll> dp(m + 1, 0);
	dp[0] = 1;
	REP(i, m) REP(j, n) {
		if (s.substr(i, size(t[j])) == t[j]) {
			dp[i + size(t[j])] += dp[i];
			dp[i + size(t[j])] %= MOD;
		}
	}
	cout << dp[m] << '\n';
	return 0;
}

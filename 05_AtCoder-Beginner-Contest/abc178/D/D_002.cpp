#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
ll dp[2001];
int main() {
	int s; cin >> s;
	dp[3] = 1;
	for (int i = 4; i <= s; i++)
		dp[i] = (dp[i-1] + dp[i-3]) % MOD;
	cout << dp[s] << '\n';
	return 0;
}

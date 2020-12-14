#include <bits/stdc++.h>
using namespace std;
long long dp[12];
int main() {
	int l; cin >> l;
	dp[0] = 1;
	while (--l)
		for (int i = 11; i >= 0; i--)
			dp[i+1] += dp[i];
	cout << dp[11] << '\n';
	return 0;
}

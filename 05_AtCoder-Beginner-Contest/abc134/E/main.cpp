#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int dp[n];
	fill(dp, dp+n, 10);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		*upper_bound(dp, dp+n, -a) = -a;
	}
	cout << lower_bound(dp, dp+n, 1) - dp << '\n';
}

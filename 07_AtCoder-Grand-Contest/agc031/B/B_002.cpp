#include <bits/stdc++.h>
using namespace std;
int64_t dp[200002];
int main() {
	int n; cin >> n;
	int res = 1, pre = -1;
	while (n--) {
		int c; cin >> c;
		if (c == pre) continue ;
		pre = c;
		dp[c] += res;
		res = dp[c] % (int)(1e9+7);
	}
	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> dp(n + 1);
	for (int i = 0; i < n; i++) {
		int p; cin >> p;
		dp[p] = dp[p - 1] + 1;
	}
	cout << n - *max_element(dp.begin(), dp.end()) << '\n';
	return 0;
}

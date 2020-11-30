#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> r(n);
	REP(i, n) cin >> r[i];

	vector<int> dp1(n, 0), dp2(n, 0);
	dp1[0] = dp2[0] = 1;
	REP(i, n) REP(j, i) {
		if (r[i] < r[j])
			dp1[i] = max(dp1[i], dp2[j] + 1);
		if (r[i] > r[j])
			dp2[i] = max(dp2[i], dp1[j] + 1);
	}

	int res = max(dp1[n - 1], dp2[n - 1]);
	cout << (res < 3 ? 0 : res) << '\n';
	return 0;
}

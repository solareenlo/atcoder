#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

int main() {
	int h, w; cin >> h >> w;
	if (h > w) swap(h, w);
	vector<int> a;
	REP(i, 1<<h) {
		bool ok = true;
		for (int j = 1; j <= i; j <<= 1) {
			if ((i&j) && (i&(j<<1))) {
				ok = false;
				break ;
			}
		}
		if (ok) a.push_back(i);
	}
	int n = a.size();
	mint dp[w+1][n];
	dp[0][0] = 1;
	REP(i, w) REP(j, n) REP(k, n) {
		int t = (a[j]&a[k]) | ((a[j]<<1)&a[k]) | (a[j]&(a[k]<<1));
		if (!t)
			dp[i+1][k] = dp[i+1][k] + dp[i][j];
	}
	mint res = 0;
	REP(i, n) res += dp[w][i];
	cout << res.val() - 1 << '\n';
	return 0;
}

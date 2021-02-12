#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

int main() {
	int n, m; cin >> n >> m;
	if (n > m) swap(n, m);
	vector<int> a;
	REP(i, 1<<n) {
		bool ok = true;
		for (int j = 1; j <= i; j <<= 1) {
			if ((i&j) && (i&(j<<1))) {
				ok = false;
				break ;
			}
		}
		if (ok) a.push_back(i);
	}
	int N = a.size();
	mint dp[m+1][N];
	dp[0][0] = 1;
	REP(i, m) REP(j, N) REP(k, N)
		if (!((a[j]&a[k]) | ((a[j]<<1)&a[k]) | (a[j]&(a[k]<<1))))
			dp[i+1][k] += dp[i][j];
	mint res = 0;
	REP(i, N) res += dp[m][i];
	cout << res.val() - 1 << '\n';
	return 0;
}

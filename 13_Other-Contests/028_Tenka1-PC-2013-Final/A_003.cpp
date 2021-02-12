#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

mint dp[16][1<<15];
int pat[1<<15];

int main() {
	int n, m; cin >> n >> m;
	dp[0][0] = 1;
	int t = 0;
	REP(i, 1<<m) if (!(i&i<<1)) pat[t++] = i;
	REP(i, n) REP(j, t) REP(k, t) {
		if (!(pat[j]&pat[k]) && !(pat[j]<<1&pat[k]) && !(pat[j]&pat[k]<<1))
			dp[i+1][j] += dp[i][k];
	}
	mint res = 0;
	REP(i, t) res += dp[n][i];
	cout << res.val() - 1 << '\n';
	return 0;
}

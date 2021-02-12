#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

int main() {
	int h, w; cin >> h >> w;
	mint dp[16][1<<15] = {};
	dp[0][0] = 1;
	REP(i, h) REP(j, 1<<w) {
		int x = (1<<w)-1 & ~(j|j<<1|j>>1);
		for (int t=x; ; t=t-1&x)
			if (!(t&t<<1)) {
				dp[i+1][t] += dp[i][j];
				if (!t) break ;
			}
	}
	mint res = 0;
	REP(i, 1<<w) res += dp[h][i];
	cout << res.val() - 1 << '\n';
	return 0;
}

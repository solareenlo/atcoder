#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

mint comb[2050][2050], dp[65][2050];

int main() {
	int h, n, w; cin >> h >> n >> w;
	REP(i, w+1) {
		comb[i][0] = comb[i][i] = 1;
		for (int j=1; j<i; j++)
			comb[i][j] = comb[i-1][j-1] + comb[i-1][j];
	}
	REP(i, min(w-1, n)+1)
		dp[1][i] = comb[w-1][i];
	for (int i=1; i<h; i++) REP(j, w+1) REP(k, n+1) {
		if (j+k>w) break ;
		dp[i+1][j+k] += dp[i][j] * comb[w-j][k];
	}
	cout << dp[h][w].val() << '\n';
	return 0;
}

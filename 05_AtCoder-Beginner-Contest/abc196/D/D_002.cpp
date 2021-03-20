#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
	int h, w, a; cin >> h >> w >> a;
	int dp[h+1][1<<(h*w)][a+1];
	bzero(dp, sizeof(dp));
	dp[0][0][a] = 1;
	REP(i, h) REP(j, w+1) REP(k, 1<<w) {
		int t=(1<<w)-k-1;
		if (j==w) {
			int b=__builtin_popcount(t);
			for (int l=b; l<=a; l++)
				dp[i+1][t][l-b] += dp[i][k][l];
		}
		if (t>>j&1) REP(b, a+1) {
			dp[i][k|1<<j][b]+=dp[i][k][b];
			if (b && t>>(j+1)&1)
				dp[i][k|3<<j][b-1] += dp[i][k][b];
		}
	}
	cout << dp[h][0][0] << '\n';
	return 0;
}

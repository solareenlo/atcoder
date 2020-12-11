#include <bits/stdc++.h>
#define REP(i, n) for (int i = n; ~i; i--)

double dp[101][101][101];

int main() {
	REP(i, 99) REP(j, 99) REP(k, 99) {
		double sum = i + j + k;
		dp[i][j][k] = i/sum*dp[i+1][j][k];
		dp[i][j][k] += j/sum*dp[i][j+1][k];
		dp[i][j][k] += k/sum*dp[i][j][k+1];
		dp[i][j][k] += 1;
	}
	int a, b, c; std::cin >> a >> b >> c;
	printf("%.10f\n", dp[a][b][c]);
	return 0;
}

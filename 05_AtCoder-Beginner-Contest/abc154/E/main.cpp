#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string str; cin >> str;
	int n = str.size();
	int K; cin >> K;

	int dp[n+1][2][K+1];
	memset(dp, 0, sizeof(dp));

	dp[0][0][0] = 1;
	REP(i, n) REP(j, 2) {
		int r = j ? 9 : str[i]-'0';
		REP(k, K+1) REP(l, r+1) {
			int c = k + !!l;
			if (c <= K)
				dp[i+1][j||l<r][c] += dp[i][j][k];
		}
	}
	cout << dp[n][0][K] + dp[n][1][K] << '\n';
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int dp[101][2][10];
int main() {
	string str; cin >> str;
	int n = str.size();
	int K; cin >> K;
	dp[0][0][0] = 1;
	REP(i, n) REP(j, 2) REP(k, K+1) {
		int r = j ? 9 : str[i]-'0';
		REP(l, r+1)
			if (k+!!l <= K)
				dp[i+1][j||l<r][k+!!l] += dp[i][j][k];
	}
	cout << dp[n][0][K] + dp[n][1][K] << '\n';
    return 0;
}

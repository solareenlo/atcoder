#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	string s[h];
	REP(i, h) cin >> s[i];
	int dp[h+1][w+1];
	REP(i, h+1) REP(j, w+1) dp[i][j] = 1e9;
	dp[0][0] = 0;
	REP(i, h) REP(j, w) {
		dp[i+1][j] = min(dp[i+1][j], dp[i][j] + (s[i][j] != 'S'));
		dp[i][j+1] = min(dp[i][j+1], dp[i][j] + (s[i][j] != 'E'));
	}
	cout << dp[h-1][w] << '\n';
	return 0;
}

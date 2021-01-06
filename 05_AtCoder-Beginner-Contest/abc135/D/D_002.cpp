#include <iostream>
#include <strings.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1e9+7;
int main() {
	string s; cin >> s;
	int n = s.size();
	int dp[n+1][13];
	bzero(dp, sizeof(dp));
	dp[0][0] = 1;
	REP(i, n) REP(j, 13) {
		if (s[i] == '?')
			REP(k, 10)
				(dp[i+1][(j*10+k)%13] += dp[i][j]) %= MOD;
		else
			(dp[i+1][(j*10+s[i]-'0')%13] += dp[i][j]) %= MOD;
	}
	cout << dp[n][5] << '\n';
	return 0;
}

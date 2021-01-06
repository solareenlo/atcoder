#include <iostream>
#include <strings.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const long long MOD = 1000000007;

int main() {
	string s; cin >> s;
	int n = s.size();
	uint64_t dp[n+1][13];
	bzero(dp, sizeof(dp));
	dp[0][0] = 1;
	REP(i, n) {
		int c;
		if (s[i] == '?') c = -1;
		else c = s[i] - '0';
		REP(j, 10) {
			if (c != -1 && c != j) continue ;
			REP(k, 13)
				dp[i+1][(k*10+j)%13] += dp[i][k];
		}
		REP(j, 13) dp[i+1][j] %= MOD;
	}
	cout << dp[n][5] << '\n';
    return 0;
}

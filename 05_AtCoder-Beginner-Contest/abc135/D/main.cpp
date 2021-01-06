#include <iostream>
#include <string.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1e9+7;
int main() {
	string s; cin >> s;
	int dp[13] = {0};
	dp[0] = 1;
	REP(k, (int)s.size()) {
		int v[13] = {};
		REP(i, 13) {
			if (s[k] == '?')
				REP(j, 10) (v[(i*10+j)%13] += dp[i]) %= MOD;
			else
				(v[(i*10+s[k]-'0')%13] += dp[i]) %= MOD;
		}
		memmove(dp, v, sizeof(dp));
	}
	cout << dp[5] << '\n';
	return 0;
}

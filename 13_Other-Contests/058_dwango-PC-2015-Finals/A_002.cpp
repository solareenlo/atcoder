#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int64_t MOD = 1e9+7;
int64_t dp[2][255][255];
int main() {
	int n, x; cin >> n >> x;
	string s; cin >> s;
	dp[0][0][0] = 1;
	REP(i, n) {
		REP(j, n+1) REP(k, x+1) dp[(i+1)&1][j][k] = 0;
		REP(j, n+1) REP(k, x+1) {
			if (s[i]=='2' || s[i]=='?') {
				if (j%2) (dp[(i+1)&1][1][k]+=dp[i&1][j][k])%=MOD;
				else (dp[(i+1)&1][j+1][k]+=dp[i&1][j][k])%=MOD;
			}
			if (s[i]=='5' || s[i]=='?') {
				if (j%2) (dp[(i+1)&1][j+1][min(x,k+(j+1)/2)]+=dp[i&1][j][k])%=MOD;
				else (dp[(i+1)&1][0][k]+=dp[i&1][j][k])%=MOD;
			}
			if (s[i]!='2' && s[i]!= '5')
				(dp[(i+1)&1][0][k]+=(s[i]=='?'?8:1)*dp[i&1][j][k]%MOD)%=MOD;
		}
	}
	int64_t res = 0;
	REP(i, 255)
		(res+=dp[n&1][i][x])%=MOD;
	cout << res << '\n';
	return 0;
}

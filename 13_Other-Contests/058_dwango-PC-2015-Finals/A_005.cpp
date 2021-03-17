#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1e9 + 7;

int main() {
	int n, x; cin >> n >> x;
	string s; cin >> s;
	int now = 0;
	int dp[2][255][55] = {};
	dp[0][0][0] = 1;
	REP(i, n) {
		REP(j, x+1) REP(k, 51) dp[1-now][j][k] = 0;
		REP(d, 10) {
			if (s[i]!='?' && s[i]-'0'!=d) continue ;
			REP(j, x+1) REP(k, 51) {
				if (d==2)
					(dp[1-now][j][k%2?1:min(49,k+1)]+=dp[now][j][k])%=MOD;
				else if (k%2 && d==5)
					(dp[1-now][min(x,j+(k+1)/2)][min(50,k+1)]+=dp[now][j][k])%=MOD;
				else
					(dp[1-now][j][0]+=dp[now][j][k])%=MOD;
			}
		}
		now = 1-now;
	}
	int res = 0;
	REP(k, 51) (res+=dp[now][x][k])%=MOD;
	cout << res << '\n';
	return 0;
}

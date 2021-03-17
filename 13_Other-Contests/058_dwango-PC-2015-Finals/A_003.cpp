#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1e9+7;

int main() {
	int n, x; cin >> n >> x;
	string s; cin >> s;
	int dp[255][255] = {};
	dp[0][0] = 1;
	REP(i, n) {
		int dp2[255][255] = {};
		REP(l, 10) {
			if (s[i]!='?' && s[i]-'0'!=l) continue ;
			for (int j=n; j>=0; j--) for (int k=x; k>=0; k--) {
				if (l==2) {
					if (j%2==0) (dp[j+1][k]+=dp[j][k])%=MOD;
					else (dp2[1][k]+=dp[j][k])%=MOD;
				} else if (l==5 && j%2)
					(dp2[j+1][min(x,k+(j+1)/2)]+=dp[j][k])%=MOD;
				else
					(dp2[0][k]+=dp[j][k])%=MOD;
			}
		}
		memmove(dp, dp2, sizeof(dp));
	}
	int res = 0;
	REP(i, n+1) (res+=dp[i][x])%=MOD;
	cout << res << '\n';
	return 0;
}

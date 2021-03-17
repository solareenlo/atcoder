#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int MOD = 1e9+7;

int main() {
	int n, x; cin >> n >> x;
	string s; cin >> s;
	vector<vector<int> > dp(n+2, vector<int>(x+1));
	dp[0][0] = 1;
	REP(i, n) {
		vector<vector<int> > dp2(n+2, vector<int>(x+1));
		REP(l, 10) {
			if (s[i]!='?' && s[i]-'0'!=l) continue ;
			for (int j=n; j>=0; j--) for (int k=x; k>=0; k--) {
				if (l==2)
					(dp2[(j%2)?1:j+1][k]+=dp[j][k])%=MOD;
				else if(l==5 && j%2)
					(dp2[j+1][min(x,k+(j+1)/2)]+=dp[j][k])%=MOD;
				else
					(dp2[0][k]+=dp[j][k])%=MOD;
			}
		}
		dp.swap(dp2);
	}
	int res = 0;
	REP(i, n+1) (res+=dp[i][x])%=MOD;
	cout << res << '\n';
	return 0;
}

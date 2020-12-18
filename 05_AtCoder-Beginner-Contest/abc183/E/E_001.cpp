#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); i++)

const int MOD = 1e9+7, hw = 2000;
int dp[hw][hw], x[hw][hw], y[hw][hw], z[hw][hw];
string s[hw];

int main() {
	int h, w; cin >> h >> w;
	REP(i, h) cin >> s[i];
	dp[0][0] = 1;
	REP(i, h) REP(j, w) {
		if (!i && !j) continue ;
		if (s[i][j] == '#') continue ;
		if (     j>0) x[i][j] = (x[i][j-1]+dp[i][j-1])%MOD;
		if (i>0     ) y[i][j] = (y[i-1][j]+dp[i-1][j])%MOD;
		if (i>0&&j>0) z[i][j] = (z[i-1][j-1]+dp[i-1][j-1])%MOD;
		dp[i][j] = ((long long)x[i][j]+y[i][j]+z[i][j])%MOD;
	}
	cout << dp[h-1][w-1] << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int res = 1e9;
	REP(k, n+1) {
		string l = s.substr(0, k);
		string r = s.substr(k);
		int L = l.size();
		int R = r.size();
		int dp[L+1][R+1];
		bzero(dp, sizeof(dp));
		REP(i, L) REP(j, R) {
			if (l[i]==r[j])
				dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1);
			else
				dp[i+1][j+1] = max(dp[i+1][j+1], max(dp[i+1][j], dp[i][j+1]));
		}
		res = min(res, n-2*dp[L][R]);
	}
	cout << res << '\n';
	return 0;
}

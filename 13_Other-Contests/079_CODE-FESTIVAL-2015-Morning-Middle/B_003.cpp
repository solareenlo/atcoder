#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int maxi = 0;
	REP(k, n+1) {
		string l = s.substr(0, k);
		string r = s.substr(k);
		int L = l.size();
		int R = r.size();
		int dp[100][100] = {};
		REP(i, L) REP(j, R) {
			if (l[i]==r[j]) dp[i+1][j+1] = dp[i][j]+1;
			else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
		}
		maxi = max(maxi, dp[L][R]);
	}
	cout << n-maxi*2 << '\n';
	return 0;
}

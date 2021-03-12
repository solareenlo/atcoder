#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	string s, t; cin >> s >> t;
	int ns = s.size();
	int nt = t.size();
	bool dp[5001][5001] = {};
	dp[0][0] = 1;
	REP(i, ns) REP(j, nt) if (dp[i][j] && s[i]==t[j]) {
		dp[i+1][j+1] = 1;
		if (j<nt-1 && s[i]!=t[j+1])
			for (j++; j<=nt; j++)
				dp[i+1][j] = 1;
	}
	cout << (dp[ns][nt] ? "Yes" : "No") << '\n';
	return 0;
}

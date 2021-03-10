#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int main() {
	int n, p; cin >> n >> p;
	bool dp[505][505] = {};
	REP(i, n) REP(j, n) REP(k, j)
		if (!dp[i-k][min(i-k, k+1)])
			dp[i][j] = true;
	cout << (dp[n][p] ? "first" : "second") << '\n';
	return 0;
}

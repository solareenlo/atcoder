#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<vector<char> > s(h, vector<char>(w));
	REP(i, h) REP(j, w)
		cin >> s[i][j];

	vector<vector<int> > dp(h, vector<int>(w, INT_MAX));
	dp[0][0] = (s[0][0] == '#');
	REP(i, h) REP(j, w) {
		if (j != 0) // 左隣りが'.'で自分が'#'の時の場合
			dp[i][j] = min(dp[i][j], dp[i][j-1] + (s[i][j-1] == '.' && s[i][j] == '#'));
		if (i != 0) // 上が'.'で自分が'#'の時の場合
			dp[i][j] = min(dp[i][j], dp[i-1][j] + (s[i-1][j] == '.' && s[i][j] == '#'));
	}
	cout << dp[h-1][w-1] << '\n';
	return 0;
}

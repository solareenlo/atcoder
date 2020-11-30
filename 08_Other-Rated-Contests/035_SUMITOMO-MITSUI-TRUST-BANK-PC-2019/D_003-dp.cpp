#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

bool dp[30001][4][1009];

int main() {
	int n; cin >> n;
	string s; cin >> s;

	dp[0][0][0] = true;
	// i: 最後にどの桁を見たか．
	// j: 現時点で何文字を残すと決めたか．
	// k: 現時点で残すと決まった部分の文字列．
	// dp[i][j][k] = (true or false);
	// 動的計画法 の遷移は，「次の文字を残すか」「次の文字を消すか」の２択．
	REP(i, n) REP(j, 4) REP(k, 1000) {
		if (dp[i][j][k] == false) continue ;
		dp[i + 1][j][k] = true;
		if (j < 3)
			dp[i + 1][j + 1][k * 10 + (s[i] - '0')] = true;
	}

	int cnt = 0;
	REP(i, 1000)
		if (dp[n][3][i])
			cnt++;

	cout << cnt << '\n';
	return 0;
}

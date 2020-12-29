#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int maxi = 0;
	for (int k = 1; k < n; k++) { // 後ろの開始位置
		int l = k, r = n-k;
		int dp[100][100] = {};
		REP(i, l) REP(j, r) { // 前と後ろで何文字ずつ使ったかで DP
			if (s[i]==s[j+k]) dp[i+1][j+1] = dp[i][j]+1;
			else dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
		}
		maxi = max(maxi, dp[l][r]);
	}
	cout << n-maxi*2 << '\n';
	return 0;
}

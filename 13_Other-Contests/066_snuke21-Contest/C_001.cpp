#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int mask[10000], dp[1<<12];
int main() {
	int n; cin >> n;
	REP(i, n) {
		string s; cin >> s;
		REP(j, 12)
			mask[i] |= (s[j]=='o')<<j;
	}
	for (int s=(1<<12)-1; s>=0; s--) REP(i, n) if ((s|mask[i])>s)
		dp[s] = max(dp[s], dp[s|mask[i]]+1);
	cout << dp[0] << '\n';
	return 0;
}

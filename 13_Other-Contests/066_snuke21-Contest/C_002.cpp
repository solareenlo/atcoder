#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
int cnt[1<<12], dp[1<<12];
int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		cnt[accumulate(s.begin(), s.end(), 0, [&](int x, char c) {return x*2+(c=='o');})] = 1;
	}
	REP(s, 1<<12) REP(t, 1<<12) if ((s&t)!=t)
		dp[s|t] = max(dp[s|t], dp[s]+cnt[t]);
	cout << *max_element(dp, dp+(1<<12)) << '\n';
	return 0;
}

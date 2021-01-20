#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	string s[n];
	for (auto &x : s) cin >> x;
	string res = s[0]+s[1];
	REP(i, n) REP(j, n)
		if (i != j)
			res = min(res, s[i]+s[j]);
	cout << res << '\n';
	return 0;
}

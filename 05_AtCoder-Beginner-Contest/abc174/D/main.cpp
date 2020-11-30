#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	string c; cin >> c;

	int cntW = 0;
	int cntR = 0;
	REP(i, n) {
		if (c[i] == 'W') cntW++;
		if (c[i] == 'R') cntR++;
	}
	string sub;
	if (n % 2 && n > 1)
		sub = c.substr(n - cntW);
	else
		sub = c.substr(n - cntW);
	// cout << sub << '\n';

	int cnt = 0;
	REP(i, (int)sub.size())
		if (sub[i] == 'R') cnt++;
	if (cntR == n) cnt = 0;
	cout << cnt << '\n';
	return 0;
}

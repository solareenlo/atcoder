#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<string> s(h);
	REP(i, h) cin >> s[i];

	int cnt = 0;
	REP(i, h) REP(j, w - 1)
		if (s[i][j] == '.' && s[i][j+1] == '.') cnt++;
	REP(j, w) REP(i, h - 1)
		if (s[i][j] == '.' && s[i+1][j] == '.') cnt++;

	cout << cnt << '\n';
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	char s[n+1][n];
	REP(i, n) REP(j, n) cin >> s[i][j];

	int res = 0;
	REP(i, n) {
		int pos = -1;
		REP(j, n) if (s[i][j] == '.') pos = j;
		if (pos == -1) continue ;
		REP(j, pos+1) s[i][j] = 'o';
		for (int j = pos; j < n; j++) s[i+1][j] = 'o';
		res++;
	}
	cout << res << '\n';
	return 0;
}

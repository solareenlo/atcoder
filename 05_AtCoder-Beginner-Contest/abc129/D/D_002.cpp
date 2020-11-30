#include <bits/stdc++.h>
#define REP(i, n) for (int i = 1; i <= (n); i++)
using namespace std;

int d[2002][2002][4];
char s[2002][2002];

int main() {
	int h, w; cin >> h >> w;
	REP(i, h) scanf("%s", s[i]+1);

	REP(i, h) {
		REP(j, w) {
			if (s[i][j] == '#') continue ;
			d[i][j][0] = d[i][j-1][0] + 1;
		}
		for (int j = w; j > 0; j--) {
			if (s[i][j] == '#') continue ;
			d[i][j][1] = d[i][j+1][1] + 1;
		}
	}

	REP(j, w) {
		REP(i, h) {
			if (s[i][j] == '#') continue ;
			d[i][j][2] = d[i-1][j][2] + 1;
		}
		for (int i = h; i > 0; i--) {
			if (s[i][j] == '#') continue ;
			d[i][j][3] = d[i+1][j][3] + 1;
		}
	}

	int maxi = 0;
	REP(i, h) REP(j, w)
		maxi = max(maxi, d[i][j][0]+d[i][j][1]+d[i][j][2]+d[i][j][3]-3);
	cout << maxi << '\n';
	return 0;
}

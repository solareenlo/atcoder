#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int h, w; cin >> h >> w;
	vector<vector<int> > a(h+1, vector<int>(w+1, 100000));
	REP(i, h) REP(j, w) {
		char c; cin >> c;
		if (c == '#')
			a[i][j] = 0;
	}
	REP(i, h) REP(j, w) {
		a[i][j+1] = min(a[i][j]+1, a[i][j+1]);
		a[i][w-j-1] = min(a[i][w-j]+1, a[i][w-j-1]);
	}
	REP(j, w) REP(i, h) {
		a[i+1][j] = min(a[i][j]+1, a[i+1][j]);
		a[h-i-1][j] = min(a[h-i][j]+1, a[h-i-1][j]);
	}
	int res = 0;
	REP(i, h) REP(j, w) res = max(res, a[i][j]);
	cout << res << '\n';
    return 0;
}

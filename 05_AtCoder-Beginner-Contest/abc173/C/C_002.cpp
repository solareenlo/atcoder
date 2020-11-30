#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int h, w, k;
	cin >> h >> w >> k;
	vector<vector<char> > c(h, vector<char>(w));
	REP(i, h) REP(j, w) cin >> c[i][j];

	int res = 0;
	REP(y, 1 << h) REP(x, 1 << w) {
		int sum = 0;
		REP(i, h) REP(j, w)
			if ((y >> i & 1) == 0 && (x >> j & 1) == 0 && c[i][j] == '#')
				sum++;
		if (sum == k)
			res++;
	}
	cout << res << '\n';
	return 0;
}

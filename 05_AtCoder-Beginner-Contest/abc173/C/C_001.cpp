#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w, k;
	cin >> h >> w >> k;
	vector<vector<char> > c(h, vector<char>(w, '.'));
	REP(i, h) REP(j, w) cin >> c[i][j];

	int res = 0;
	REP(l, 1 << h) REP(m, 1 << w) {
		int sum = 0;
		REP(i, h) REP(j, w) {
			// 二進数表記で桁が立ってるところは数えない
			if (((l >> i) & 1) == 0 && ((m >> j) & 1) == 0 && c[i][j] == '#')
				sum++;
		}
		cout << l << ' ' << m << ' ' << sum << '\n';
		if (sum == k)
			res++;
	}

	cout << res << '\n';
    return 0;
}

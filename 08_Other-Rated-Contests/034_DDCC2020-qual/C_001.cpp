#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int h, w, K; cin >> h >> w >> K;
	vector<string> s(h);
	REP(i, h) cin >> s[i];

	vector<vector<int> > res(h, vector<int>(w, 0));
	int k = 1;
	REP(i, h) REP(j, w) {
		if (s[i][j] == '#')
			res[i][j] = k++;
	}

	REP(i, h) {
		REP(j, w - 1) {
			if (res[i][j] != 0) {
				if (res[i][j+1] == 0)
					res[i][j+1] = res[i][j];
			}
		}
		for (int j = w - 1; j > 0; j--) {
			if (res[i][j] != 0) {
				if (res[i][j-1] == 0)
					res[i][j-1] = res[i][j];
			}
		}
	}

	while (true) {
		REP(i, h) REP(j, w) {
			if (res[i][j] == 0) {
				if (i + 1 < h) {
					if (res[i + 1][j] != 0)
						res[i][j] = res[i + 1][j];
				}
			}
		}
		REP(i, h) REP(j, w) {
			if (res[i][j] == 0) {
				if (i - 1 >= 0)
					if (res[i - 1][j] != 0)
						res[i][j] = res[i - 1][j];
			}
		}
		bool ok = true;
		REP(i, h) {
			int sum = 0;
			REP(j ,w) {
				sum += res[i][j];
			}
			if (sum == 0) {
				ok = false;
				break ;
			}
		}
		if (ok) break ;
	}
	int sum = 0;
	REP(i, w) sum += res[h - 1][i];
	if (sum == 0) {
		REP(i, w) res[h - 1][i] = res[h - 2][i];
	}
	REP(i, h) {
		REP(j, w)
			cout << res[i][j] << " ";
		cout << '\n';
	}
	return 0;
}

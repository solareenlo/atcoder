#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[9] = {0, 1, 0,-1, 0, 1, 1,-1,-1};
const int dy[9] = {-1,0, 1, 0, 0, 1,-1,-1, 1};

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int h, w;
	cin >> h >> w;
	vector<vector<char> > s(h, vector<char>(w, '.'));
	REP(i, h) REP(j, w) cin >> s[i][j];

	vector<vector<char> > ans(h, vector<char>(w, '#'));
	REP(i, h) REP(j ,w) {
		if (s[i][j] == '.') {
			REP(k, 9) {
				if (i + dx[k] >= 0 && i + dx[k] < h)
					if (j + dy[k] >= 0 && j + dy[k] < w)
						ans[i + dx[k]][j + dy[k]] = '.';
			}
		}
	}

	vector<vector<char> > verify(h, vector<char>(w, '.'));
	REP(i, h) REP(j ,w) {
		if (ans[i][j] == '#') {
			REP(k, 9) {
				if (i + dx[k] >= 0 && i + dx[k] < h)
					if (j + dy[k] >= 0 && j + dy[k] < w)
						verify[i + dx[k]][j + dy[k]] = '#';
			}
		}
	}

	if (s == verify) {
		cout << "possible" << '\n';
		REP(i, h) {
			REP(j, w)
				cout << ans[i][j];
			cout << '\n';
		}
	} else cout << "impossible" << '\n';
	return 0;
}

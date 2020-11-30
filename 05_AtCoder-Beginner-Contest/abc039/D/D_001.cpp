#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[9] = {0, 1, 0,-1, 0, 1, 1,-1,-1};
const int dy[9] = {-1,0, 1, 0, 0, 1,-1,-1, 1};

int main(){
    cin.tie(0)->sync_with_stdio(false);

	int h, w;
	cin >> h >> w;
	vector<vector<int> > s(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) {
		char c;
		cin >> c;
		if (c == '#')
			s[i][j] = 1;
	}

	vector<vector<int> > ans(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) {
		bool ok = true;
		if (s[i][j]) {
			REP(k, 9) {
				if (i + dx[k] >= 0 && i + dx[k] < h)
					if (j + dy[k] >= 0 && j + dy[k] < w)
						if (!s[i + dx[k]][j + dy[k]]) ok = false;
			}
			if (ok) ans[i][j] = 1;
		}
	}

	vector<vector<int> > verify(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) {
		if (ans[i][j]) {
			REP(k, 9) {
				if (i + dx[k] >= 0 && i + dx[k] < h)
					if (j + dy[k] >= 0 && j + dy[k] < w)
						verify[i + dx[k]][j + dy[k]] = 1;
			}
		}
	}

	if (s == verify) {
		cout << "possible" << '\n';
		REP(i, h) {
			REP(j, w) {
				if (ans[i][j] == 1) cout << '#';
				else cout << '.';
			}
			cout << '\n';
		}
	}
	else cout << "impossible" << '\n';
    return 0;
}

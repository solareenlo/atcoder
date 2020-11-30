#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w; cin >> h >> w;
	vector<vector<int> > a(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) cin >> a[i][j];

	int cnt = 0;
	vector<P> l, r;
	REP(i, h) {
		if (i % 2) {
			for (int j = w - 1; j >= 0; j--) {
				if (a[i][j] % 2) {
					if (j == 0 && i < h - 1) {
						a[i][j]--;
						a[i+1][j]++;
						l.push_back(make_pair(i+1, j+1));
						r.push_back(make_pair(i+1+1, j+1));
						cnt++;
					} else if (j - 1 >= 0) {
						a[i][j]--;
						a[i][j-1]++;
						l.push_back(make_pair(i+1, j+1));
						r.push_back(make_pair(i+1, j-1+1));
						cnt++;
					}
				}
			}
		} else if (i % 2 == 0) {
			REP(j, w) {
				if (a[i][j] % 2) {
					if (j == w - 1 && i < h - 1) {
						a[i][j]--;
						if (i + 1 < h - 1) a[i+1][j]++;
						l.push_back(make_pair(i+1, j+1));
						r.push_back(make_pair(i+1+1, j+1));
						cnt++;
					} else if (j + 1 < w) {
						a[i][j]--;
						a[i][j+1]++;
						l.push_back(make_pair(i+1, j+1));
						r.push_back(make_pair(i+1, j+1+1));
						cnt++;
					}
				}
			}
		}
	}

	cout << cnt << '\n';
	REP(i, cnt) {
		cout << l[i].first << " " << l[i].second << " " << r[i].first << " " << r[i].second << '\n';
	}
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int h, w; cin >> h >> w;
	vector<vector<int> > a(h, vector<int>(w, 0));
	REP(i, h) REP(j, w) cin >> a[i][j];

	vector<P> l, r;
	REP(i, h) {
		REP(j, w - 1) {
			if (a[i][j] % 2) {
				a[i][j+1]++;
				l.push_back(make_pair(i+1, j+1));
				r.push_back(make_pair(i+1, j+1+1));
			}
		}
		if (i != h - 1 && a[i][w - 1] % 2) {
			a[i+1][w-1]++;
			l.push_back(make_pair(i+1, w-1+1));
			r.push_back(make_pair(i+1+1, w-1+1));
		}
	}

	int n = l.size();
	cout << n << '\n';
	REP(i, n) {
		cout << l[i].first << " " << l[i].second << " " << r[i].first << " " << r[i].second << '\n';
	}
    return 0;
}

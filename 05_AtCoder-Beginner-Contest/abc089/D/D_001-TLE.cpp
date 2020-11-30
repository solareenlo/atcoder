#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int h, w, d; cin >> h >> w >> d;
	vector<vector<int> > a(h, vector<int>(w));
	REP(i, h) REP(j, w) cin >> a[i][j];

	map<int, P> m;
	REP(i, h) REP(j, w) m[a[i][j]] = make_pair(i+1, j+1);

	int q; cin >> q;
	while (q--) {
		int l, r; cin >> l >> r;
		int n = (r - l) / d;
		int res = 0;
		REP(i, n) {
			res += abs(m[l+d*i].first - m[l+d*(i+1)].first);
			res += abs(m[l+d*i].second - m[l+d*(i+1)].second);
		}
		cout << res << '\n';
	}
    return 0;
}

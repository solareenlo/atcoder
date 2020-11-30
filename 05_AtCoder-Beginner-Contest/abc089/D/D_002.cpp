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

	vector<int> s(h * w + 1, 0);
	for (int i = d + 1; i <= h * w; i++) {
		s[i] += s[i - d];
		s[i] += abs(m[i].first - m[i-d].first);
		s[i] += abs(m[i].second - m[i-d].second);
	}

	int q; cin >> q;
	while (q--) {
		int l, r; cin >> l >> r;
		cout << s[r] - s[l] << '\n';
	}
    return 0;
}

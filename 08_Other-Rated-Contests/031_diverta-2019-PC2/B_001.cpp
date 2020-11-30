#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<pair<int, int> > xy(n);
	REP(i, n) cin >> xy[i].first >> xy[i].second;
	sort(xy.begin(), xy.end());

	int maxi = 0;
	REP(i, n) REP(j, n) {
		if (i == j) continue ;
		pair<int, int> diff = make_pair(xy[i].first - xy[j].first, xy[i].second - xy[j].second);
		int cnt = 0;
		REP(k, n) REP(l, n) {
			if (k == l) continue ;
			pair<int, int> diff2 = make_pair(xy[k].first - xy[l].first, xy[k].second - xy[l].second);
			if (diff == diff2)
				cnt++;
		}
		maxi = max(maxi, cnt);
	}
	cout << n - maxi << '\n';
	return 0;
}

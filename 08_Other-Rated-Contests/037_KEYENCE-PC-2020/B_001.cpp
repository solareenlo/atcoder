#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<P> m(n);
	REP(i, n) {
		int x, l; cin >> x >> l;
		m[i] = make_pair(x + l, x - l);
	}
	sort(m.begin(), m.end());

	int cnt = 0;
	int p = -1e9;
	REP(i, n) {
		if (p <= m[i].second) {
			cnt++;
			p = m[i].first;
		}
	}

	cout << cnt << '\n';
	return 0;
}

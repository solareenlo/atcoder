#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int H, W, m; cin >> H >> W >> m;
	vector<int> h(H), w(W);
	set<P> s;
	while (m--) {
		int a, b; cin >> a >> b;
		h[--a]++;
		w[--b]++;
		s.emplace(a, b);
	}

	int maxh = 0, maxw = 0;
	REP(i, H) maxh = max(maxh, h[i]);
	REP(i, W) maxw = max(maxw, w[i]);

	vector<int> is, js;
	REP(i, H) if (maxh == h[i]) is.push_back(i);
	REP(i, W) if (maxw == w[i]) js.push_back(i);

	int res = maxh + maxw;
	for (int i : is) for (int j : js) {
		if (s.count(P(i, j))) continue ;
		cout << res << '\n';
		return 0;
	}
	cout << res - 1 << '\n';
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int H, W, M; cin >> H >> W >> M;
	vector<int> h(H), w(W);
	set<P> s;
	REP(i, M) {
		int a, b; cin >> a >> b;
		h[--a]++;
		w[--b]++;
		s.emplace(a, b);
	}

	int maxh = 0, maxw = 0;
	REP(i, H) maxh = max(maxh, h[i]);
	REP(i, W) maxw = max(maxw, w[i]);

	vector<int> I, J;
	REP(i, H) if (maxh == h[i]) I.push_back(i);
	REP(j, W) if (maxw == w[j]) J.push_back(j);

	int res = maxh + maxw;
	for (int i : I) for (int j : J) {
		if (s.count(P(i, j))) continue ;
		cout << res << '\n';
		return 0;
	}
	cout << res - 1 << '\n';
	return 0;
}

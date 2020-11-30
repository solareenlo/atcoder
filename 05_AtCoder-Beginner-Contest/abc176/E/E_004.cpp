#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int H, W, M; cin >> H >> W >> M;
	vector<int> cnth(H), cntw(W);
	set<P> s;
	REP(i, M) {
		int a, b; cin >> a >> b;
		cnth[--a]++;
		cntw[--b]++;
		s.emplace(a, b);
	}

	int maxH = 0, maxW = 0;
	REP(i, H) maxH = max(maxH, cnth[i]);
	REP(i, W) maxW = max(maxW, cntw[i]);

	vector<int> maxh, maxw;
	REP(i, H) if (maxH == cnth[i]) maxh.push_back(i);
	REP(i, W) if (maxW == cntw[i]) maxw.push_back(i);

	int res = maxH + maxW;
	for (int h : maxh) for (int w : maxw) {
		if (s.count(P(h, w))) continue ;
		cout << res << '\n';
		return 0;
	}
	cout << res - 1 << '\n';
	return 0;
}

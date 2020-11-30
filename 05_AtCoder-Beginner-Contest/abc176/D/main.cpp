#include <bits/stdc++.h>
using namespace std;
int main() {
	int H, W, Ch, Cw, Dh, Dw;
	cin >> H >> W >> Ch >> Cw >> Dh >> Dw;
	vector<string> s(H);
	for (int i = 0; i < H; i++) cin >> s[i];

	vector<vector<int> > dist(H, vector<int>(W, -1));
	deque<tuple<int, int, int> > dq;
	dq.emplace_front(--Ch, --Cw, 0);
	while (!dq.empty()) {
		int h, w, d;
		tie(h, w, d) = dq.front();
		dq.pop_front();
		if (h < 0 || H <= h || w < 0 || W <= w) continue ;
		if (s[h][w] == '#') continue ;
		if (dist[h][w] >= 0) continue ;
		dist[h][w] = d;
		for (int dh = -2; dh <= 2; dh++) for (int dw = -2; dw <= 2; dw++)
			if (dh*dh + dw*dw == 1) dq.emplace_front(h+dh, w+dw, d);
			else if (dh*dh + dw*dw > 1) dq.emplace_back(h+dh, w+dw, d+1);
	}
	cout << dist[--Dh][--Dw] << '\n';
	return 0;
}

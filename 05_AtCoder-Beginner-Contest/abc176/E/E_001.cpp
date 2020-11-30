#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int H, W, m; cin >> H >> W >> m;
	vector<int> hs(H), ws(W); // 各行，各列に爆破対象物が何個あるかを保存
	set<P> s; // 爆破対象物の座標を保存
	REP(i, m) {
		int h, w; cin >> h >> w;
		h--, w--;
		hs[h]++;
		ws[w]++;
		s.emplace(h, w);
	}

	int maxh = 0; // 行における爆破対象物の最大値
	int maxw = 0; // 列における爆破対象物の最大値
	REP(i, H) maxh = max(maxh, hs[i]);
	REP(i, W) maxw = max(maxw, ws[i]);

	vector<int> is, js; // 最大値をとっている行と列の配列
	REP(i, H) if (maxh == hs[i]) is.push_back(i);
	REP(i, W) if (maxw == ws[i]) js.push_back(i);

	int res = maxh + maxw; // 仮の答え
	for (int i : is) for (int j : js) {
		if (s.count(P(i, j))) continue ;
		cout << res << '\n';
		return 0;
	}
	cout << res - 1 << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int H, W, M; cin >> H >> W >> M;
	vector<int> cnth(H), cntw(W); // 各行，各列に対象物が何個あるかをカウント
	set<P> s; // 対象物の座標を保存
	REP(i, M) {
		int h, w; cin >> h >> w;
		cnth[--h]++;
		cntw[--w]++;
		s.emplace(h, w);
	}

	int maxH = 0, maxW = 0; // 各行，各列の対象物の個数の最大数
	REP(i, H) maxH = max(maxH, cnth[i]);
	REP(i, W) maxW = max(maxW, cntw[i]);

	vector<int> maxh, maxw; // 最大値がある行と列
	REP(i, H) if (maxH == cnth[i]) maxh.push_back(i);
	REP(i, W) if (maxW == cntw[i]) maxw.push_back(i);

	int res = maxH + maxW; // 仮の答え
	for (int h : maxh) for (int w : maxw) {
		if (s.count(P(h, w))) continue ;
		cout << res << '\n'; // 縦横が交差するマスに対象物がない場合はすぐ出力
		return 0;
	}
	cout << res - 1 << '\n';
	return 0;
}

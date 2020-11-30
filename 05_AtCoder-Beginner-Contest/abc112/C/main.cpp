#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> x(n), y(n), h(n);
	int t;
	REP(i, n) {
		cin >> x[i] >> y[i] >> h[i];
		if (h[i] > 0) t = i;
	}

	REP(cy, 101) REP(cx, 101) {
		// 仮の中心座標の高さを計算する
		ll ch = h[t] + abs(x[t] - cx) + abs(y[t] - cy);
		ch = max(ch, 0LL);
		bool ok = true;
		REP(k, n) {
			// 与えられた座標の仮の高さを計算する
			ll tmp = ch - abs(x[k] - cx) - abs(y[k] - cy);
			// 与えられた座標の仮の高さが
			// 実際の高さと全部一致するならば，
			// そこが中心座標
			if (h[k] != max(tmp, 0LL))
				ok = false;
		}
		if (ok) {
			cout << cx << " " << cy << " " << ch << '\n';
			return 0;
		}
	}
	return 0;
}

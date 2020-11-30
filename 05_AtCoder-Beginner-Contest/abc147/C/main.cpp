#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	vector<int> a(n);
	vector<vector<pair<int, int> > > xy(20);
	REP(i, n) {
		cin >> a[i];
		REP(j, a[i]) {
			int x, y; cin >> x >> y;
			xy[i].push_back(make_pair(--x, y));
		}
	}

	int maxi = 0;
	// bit 全探索 で正直者の最大数を計算する
	// bit が立っているところが正直者
	REP(mask, 1 << n) {
		bool ok = true;
		for (int i = 0; i < n && ok; i++) {
			// 対象者が正直者でなければスルー
			if (!(mask & (1 << i))) continue ;
			for (auto p : xy[i])
				// 対象者の言ってる内容に虚偽があれば終了
				if (bool(mask & (1 << p.first)) != p.second)
					ok = false;
		}
		// ok == true なれば bit が立っているところはみんな正直者
		if (ok)
			maxi = max(maxi, __builtin_popcount(mask));
	}
	cout << maxi << '\n';
    return 0;
}

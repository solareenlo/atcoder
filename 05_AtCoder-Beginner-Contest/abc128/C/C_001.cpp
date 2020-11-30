#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<vector<int> > s(m);
	REP(i, m) {
		int k; cin >> k;
		s[i].resize(k);
		REP(j, k) {
			cin >> s[i][j];
			s[i][j]--;
		}
	}
	vector<int> p(m);
	REP(i, m) cin >> p[i];

	int res = 0;
	REP(bit, 1 << n) { // switch の on/off を bit 全探索
		bool ok = true;
		REP(i, m) { // switch の全部を確かめる
			int cnt = 0;
			for (int id : s[i])
				if ((bit >> id) & 1)
					cnt++;
			cnt %= 2;
			if (cnt != p[i])
				ok = false;
		}
		if (ok) res++;
	}

	cout << res << '\n';
    return 0;
}

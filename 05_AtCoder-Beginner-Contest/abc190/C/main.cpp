#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
	int n, m; cin >> n >> m;
	P ab[m];
	for (auto &[a, b] : ab) cin >> a >> b;
	int k; cin >> k;
	P cd[k];
	for (auto &[c, d] : cd) cin >> c >> d;

	int res = 0;
	REP(bit, 1<<k) {
		bool ball[100] = {0};
		REP(i, k) {
			auto [c, d] = cd[i];
			ball[bit & 1<<i ? c : d] = 1;
		}
		int cnt = 0;
		for (auto [a, b] : ab) if (ball[a] && ball[b]) cnt++;
		res = max(res, cnt);
	}
	cout << res << '\n';
    return 0;
}

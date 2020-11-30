#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int x, y, a, b, c; cin >> x >> y >> a >> b >> c;
	vector<ll> p(a), q(b), r(c);
	REP(i, a) cin >> p[i]; sort(p.rbegin(), p.rend());
	REP(i, b) cin >> q[i]; sort(q.rbegin(), q.rend());
	REP(i, c) cin >> r[i];
	REP(i, x) r.push_back(p[i]);
	REP(i, y) r.push_back(q[i]);
	sort(r.rbegin(), r.rend());
	ll res = 0;
	REP(i, x + y) res += r[i];
	cout << res << '\n';
	return 0;
}

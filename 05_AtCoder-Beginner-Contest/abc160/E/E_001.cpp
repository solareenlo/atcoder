#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);
	int x, y, a, b, c; cin >> x >> y >> a >> b >> c;
	vector<ll> p(a), q(b), r(c);
	REP(i, a) cin >> p[i];
	sort(p.rbegin(), p.rend());
	REP(i, b) cin >> q[i];
	sort(q.rbegin(), q.rend());
	REP(i, c) cin >> r[i];
	sort(r.rbegin(), r.rend());

	vector<ll> res;
	REP(i, x) res.push_back(p[i]);
	REP(i, y) res.push_back(q[i]);
	sort(res.begin(), res.end());
	REP(i, min((int)r.size(), (int)res.size())) {
		res[i] = max(res[i], r[i]);
	}
	cout << accumulate(res.begin(), res.end(), 0L) << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, m; cin >> n >> m;
	vector<ll> a(n); REP(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	vector<P> bc(m);
	REP(i, m) cin >> bc[i].second >> bc[i].first;
	sort(bc.rbegin(), bc.rend());

	int cnt = 0;
	vector<ll> d;
	while (n > (int)d.size()) {
		REP(i, bc[cnt].second)
			d.push_back(bc[cnt].first);
		cnt++;
		if (cnt == m) break ;
	}
	sort(d.rbegin(), d.rend());

	ll res = 0;
	if (n <= (int)d.size()) {
		REP(i, n) res += max(a[i], d[i]);
	} else {
		REP(i, n - (int)d.size())
			d.push_back(0);
		REP(i, n) res += max(a[i], d[i]);
	}
	cout << res << '\n';
    return 0;
}

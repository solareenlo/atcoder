#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = int64_t;

int main() {
	ll n, m; cin >> n >> m;
	map<ll, ll> event;
	REP(i, n) {
		ll a, b, c; cin >> a >> b >> c;
		event[a] += c;
		event[b+1] -= c;
	}
	ll res = 0, fee = 0, t = 0;
	for (auto[x, y] : event) {
		if (x != t) {
			res += min(m, fee) * (x - t);
			t = x;
		}
		fee += y;
	}
	cout << res << '\n';
    return 0;
}

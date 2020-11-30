#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline ll solve(ll h, ll w) {
	ll res = INT_MAX;
	ll a, b, c;
	for (ll i = 1; i <= h; i++) {
		a = i * w;
		b = ((h - i) / 2) * w;
		c = ((h - i + 1) / 2) * w;
		res = min(res, max({a, b, c}) - min({a, b, c}));
		b = (h - i) * (w / 2);
		c = (h - i) * ((w + 1) / 2);
		res = min(res, max({a, b, c}) - min({a, b, c}));
	}
	return res;
}

int main() {
	ll h, w; cin >> h >> w;
	cout << min(solve(h, w), solve(w, h)) << '\n';
	return 0;
}

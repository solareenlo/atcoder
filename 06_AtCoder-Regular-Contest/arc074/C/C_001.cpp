#include <bits/stdc++.h>
using namespace std;
using ll = long long;

inline int solve(int w, int h) {
	ll res = INT_MAX;
	ll a, b, c;
	for (ll i = 1; i <= w; i++) {
		a = i * h;
		b = (w - i) / 2 * h;
		c = (w - i + 1) / 2 * h;
		res = min(res, max({a, b, c}) - min({a, b, c}));
		b = (w - i) * (h / 2);
		c = (w - i) * ((h + 1) / 2);
		res = min(res, max({a, b, c}) - min({a, b, c}));
	}
	return res;
}

int main() {
	ll h, w; cin >> h >> w;
	cout << min(solve(h, w), solve(w, h))  << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll a, b, c, d; cin >> a >> b >> c >> d;
	ll res = LONG_MIN;
	res = max(res, a * c);
	res = max(res, a * d);
	res = max(res, b * c);
	res = max(res, b * d);
	cout << res << '\n';
	return 0;
}

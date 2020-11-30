#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll x, y; cin >> x >> y;
	ll a, b; cin >> a >> b;
	ll res = 0;
	if (y / x <= a) {
		res += (y - 1 - x) / b;
		cout << res << '\n';
	}
	else {
		if (x * a < x + b) {
			while (x < b) {
				x *= a;
				if (x * a > x + b) {
					x /= a;
					break ;
				}
				res++;
			}
			res += (y - 1 - x) / b;
			cout << res << '\n';
		}
		else {
			res += (y - 1 - x) / b;
			cout << res << '\n';
		}
	}
	return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll x, k, d; cin >> x >> k >> d;

	x = abs(x);
	ll div = x / d;

	ll res = 0;
	if (x == d) {
		if (k % 2)
			res = 0;
		else
			res = d;
	}
	else if (x < d) {
		if (k % 2)
			res = abs(x - d);
		else
			res = x;
	}
	else if (div > k)
		res = abs(x - d * k);
	else {
		if ((k - div) % 2)
			res = abs(x - d * (div + 1));
		else
			res = abs(x - d * div);
	}

	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int n; cin >> n;
	ll res, rem;
	res = rem = 0;
	while (n--) {
		ll a; cin >> a;
		if (a && rem) {
			res++;
			a--;
		}
		res += a / 2;
		rem = a % 2;
	}
	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll k; cin >> k;

	int cnt = 1;
	int pad = 0;
	if (k % 2 == 0) cnt = -1;
	else if (k % 5 == 0) cnt = -1;
	else {
		int digit = 0;
		int tmp = k;
		while (tmp) {
			tmp /= 10;
			digit++;
		}
		pad = digit - 1;
		ll n = 7;
		while (--digit) {
			n *= 10;
			n += 7;
		}
		if (n < k) {
			n *= 10;
			n += 7;
			pad++;
		}
		while (true) {
			if (n % k == 0) break ;
			n %= k;
			n *= 10;
			n += 7;
			cnt++;
		}
	}
	cout << cnt + pad << '\n';

	return 0;
}

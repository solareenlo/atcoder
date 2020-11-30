#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll Y, M; cin >> Y >> M;
	ll y = Y - 2013;
	if (y == 0) M = 0;
	ll m = y * 12 + M;

	ll cnt = 0;
	ll tmp = 13;
	while (m > 0) {
		m -= tmp;
		tmp++;
		cnt++;
	}
	if (y == 0) cnt++;
	cout << 2013 + cnt - 1 << " " << tmp + m - 1 << '\n';
	return 0;
}

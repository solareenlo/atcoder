#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int a, b, c, k;
	cin >> a >> b >> c >> k;

	// 貪欲法
	int cnt = 0;
	while (a >= b) {
		b *= 2;
		cnt++;
	}
	while (b >= c) {
		c *= 2;
		cnt++;
	}

	if (cnt <= k) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}

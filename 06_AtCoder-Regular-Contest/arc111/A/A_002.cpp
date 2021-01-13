#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n, m; cin >> n >> m;
	int64_t res = 1, r = 10;
	while (n) {
		if (n % 2) res = res * r % (m * m);
		n /= 2;
		r = r * r % (m * m);
	}
	cout << res / m << '\n';
	return 0;
}

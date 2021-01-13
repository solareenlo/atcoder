#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n, m; cin >> n >> m;
	int64_t res = 1, t = 10;
	while (n) {
		if (n & 1) res = res * t % (m * m);
		n >>= 1;
		t = t * t % (m * m);
	}
	cout << res / m << '\n';
	return 0;
}

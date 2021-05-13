#include <bits/stdc++.h>
using namespace std;

int64_t	n, t;

int64_t	f(int64_t x) {
	return (100 + t) * x / 100;
}

int	main() {
	cin >> t >> n;
	int64_t ok = 0;
	int64_t ng = 100 * n;
	while (ok + 1 < ng) {
		int64_t x = (ok + ng) / 2;
		if (f(x) - x < n)
			ok = x;
		else
			ng = x;
	}
	cout << f(ok) + 1 << '\n';
	return 0;
}

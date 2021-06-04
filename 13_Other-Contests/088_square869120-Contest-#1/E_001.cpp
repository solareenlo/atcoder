#include <iostream>

const int MOD = 1e9+7;

int64_t	modPow(int64_t a, int64_t n) {
	int64_t res = 1;
	while (n > 0) {
		if (n & 1)
			(res *= a) %= MOD;
		(a *= a) %= MOD;
		n >>= 1;
	}
	return (res);
}

int main() {
	int n, q; std::cin >> n >> q;
	int64_t a[n], c, dist[n], num=0;
	dist[0] = 0;
	for (int i=0; i<n; i++)
		std::cin >> a[i];
	for (int i=1; i<n; i++)
		dist[i] = (dist[i-1]+modPow(a[i-1], a[i]))%MOD;
	int64_t res = 0;
	for (int i=0; i<q; i++) {
		std::cin >> c; c--;
		(res += dist[std::max(num, c)] - dist[std::min(num, c)]) %= MOD;
		num = c;
	}
	(res += dist[num]) %= MOD;
	(res += MOD) %= MOD;
	std::cout << res << '\n';
	return 0;
}

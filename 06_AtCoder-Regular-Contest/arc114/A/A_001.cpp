#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int64_t prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main() {
	int64_t n; cin >> n;
	int64_t x[n];
	REP(i, n) cin >> x[i];
	int64_t res = 1e18;
	REP(bit, 1<<15) {
		int64_t p = 1;
		REP(i, 15) if (bit & 1<<i) p *= prime[i];
		bool e = false;
		for (auto a : x)
			if (gcd(a, p) == 1) {
				e = true;
				break ;
			}
		if (e) continue ;
		res = min(res, p);
	}
	cout << res << '\n';
    return 0;
}

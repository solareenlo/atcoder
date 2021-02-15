#include <bits/stdc++.h>
using namespace std;

int64_t	sum(int64_t a, int64_t b) { return (a + b) * (b - a + 1) / 2; }

int main() {
	int t; cin >> t;
	while (t--) {
		int64_t l, r; cin >> l >> r;
		int64_t minC = l;
		int64_t maxC = r - l;
		cout << ((minC > maxC) ? 0 : sum(r-maxC-l+1, r-minC-l+1)) << '\n';
	}
    return 0;
}

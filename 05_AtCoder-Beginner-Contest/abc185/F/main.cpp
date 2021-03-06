#include <bits/stdc++.h>
using namespace std;
int bit[300003], n, q;
void add(int i, int x) {
	while (i <= n) {
		bit[i] ^= x;
		i += i & -i;
	}
}
int sum(int i) {
	int res = 0;
	while (i) {
		res ^= bit[i];
		i -= i & -i;
	}
	return res;
}
int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		int a; cin >> a; add(i, a);
	}
	while (q--) {
		int t, x, y; cin >> t >> x >> y;
		if (t == 1) add(x, y);
		else cout << (sum(y)^sum(x-1)) << '\n';
	}
	return 0;
}

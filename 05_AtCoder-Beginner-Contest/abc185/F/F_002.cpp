#include <bits/stdc++.h>
#define LOWBIT(x) ((x)&(-x))
using namespace std;

int bittree[300003], n, q;

inline void add(int i, int x) {
	while (i <= n) {
		bittree[i] ^= x;
		i += LOWBIT(i);
	}
}

inline int sum(int i) {
	int res = 0;
	while (i) {
		res ^= bittree[i];
		i -= LOWBIT(i);
	}
	return res;
}


int main() {
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		int a; cin >> a;
		add(i, a);
	}
	while (q--) {
		int t, x, y; cin >> t >> x >> y;
		if (t == 1) add(x, y);
		else cout << (sum(y)^sum(x-1)) << '\n';
	}
	return 0;
}

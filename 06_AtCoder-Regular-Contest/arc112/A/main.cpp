#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		int maxi = max(r-l-l+1, 0);
		cout << 1LL*(1+maxi)*maxi/2 << '\n';
	}
	return 0;
}

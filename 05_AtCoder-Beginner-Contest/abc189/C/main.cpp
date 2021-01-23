#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	int res = 0;
	for (int l = 0; l < n; l++) {
		int x = a[l];
		for (int r = l; r < n; r++) {
			x = min(x, a[r]);
			res = max(res, x * (r-l+1));
		}
	}
	cout << res << '\n';
	return 0;
}

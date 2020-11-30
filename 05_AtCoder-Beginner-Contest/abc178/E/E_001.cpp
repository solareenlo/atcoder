#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0)->sync_with_stdio(false);
	int n; cin >> n;
	int a[n], s[n];
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a[i] = x + y;
		s[i] = x - y;
	}
	sort(a, a+n);
	sort(s, s+n);
	cout << max(a[n-1] - a[0], s[n-1] - s[0]) << '\n';
	return 0;
}

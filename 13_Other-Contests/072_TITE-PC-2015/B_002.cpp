#include <bits/stdc++.h>
using namespace std;
int i, n, b, c, a[100], res;
int main() {
	cin >> n >> b >> c;
	for (i=0; i<n; i++)
		cin >> a[i];
	for (i=n-1; i>=0; i--) {
		res += a[i] * min(b, c);
		c -= min(b, c);
	}
	cout << res << '\n';
	return 0;
}

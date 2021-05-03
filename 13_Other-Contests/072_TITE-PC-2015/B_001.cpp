#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, b, c; cin >> n >> b >> c;
	int a[n];
	for (int i=0; i<n; i++)
		cin >> a[i];
	int res = 0;
	for (int i=n-1; i>=0; i--) {
		if (b>=c) {
			res += a[i] * c;
			break ;
		}
		else {
			res += a[i] * b;
			c -= b;
		}
	}
	cout << res << '\n';
	return 0;
}

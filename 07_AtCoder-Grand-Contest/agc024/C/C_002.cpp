#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int b = -1;
	long long res = -1;
	for (int i = 1; i <= n; i++) {
		int a; cin >> a;
		if (a>b+1) { cout << -1 << '\n'; return 0; }
		res += (a==b+1) ? 1 : a;
		b = a;
	}
	cout << res << '\n';
	return 0;
}

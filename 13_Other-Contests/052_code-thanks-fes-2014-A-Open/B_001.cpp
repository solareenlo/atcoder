#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[3]; for (int &x : a) cin >> x;
	sort(a, a+3, greater<int>{});

	int res = 0;
	while (n > 0) n -= a[res++ % 3];
	cout << res << '\n';
	return 0;
}

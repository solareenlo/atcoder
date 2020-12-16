#include <bits/stdc++.h>
using namespace std;
int a[200002];
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int64_t res = -1;
	a[0] = -1;
	if (a[1] > 0) { cout << -1 << '\n'; return 0; }
	for (int i = 1; i <= n; i++) {
		if (a[i+1]-a[i]>1) { cout << -1 << '\n'; return 0; }
		res += (a[i-1]+1==a[i])?1:a[i];
	}
	cout << res << '\n';
	return 0;
}

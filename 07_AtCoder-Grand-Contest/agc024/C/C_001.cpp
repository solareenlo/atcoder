#include <bits/stdc++.h>
using namespace std;
int a[200002];
int main() {
	int n; cin >> n;
	for (int i = 1; i<=n; i++) cin >> a[i];
	long long res = 0;
	for (int i = n; i; i--) {
		if (a[i]>=i || a[i+1]-a[i]>1) {
			cout << -1 << '\n';
			return 0;
		}
		if (a[i+1]-a[i] != 1)
			res += a[i];
	}
	cout << res << '\n';
    return 0;
}

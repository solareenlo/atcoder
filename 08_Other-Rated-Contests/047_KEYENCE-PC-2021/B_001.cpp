#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[n];
	bzero(a, sizeof(a));
	while (n--) {
		int x; cin >> x;
		a[x]++;
	}
	int res = 0;
	for (int x : a) res += k = min(k, x);
	cout << res << '\n';
	return 0;
}

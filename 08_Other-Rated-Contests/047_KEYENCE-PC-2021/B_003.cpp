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
	while (k--) {
		int i;
		for (i = 0; a[i]; i++) a[i]--;
		res += i;
	}
	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int a[n];
	bzero(a, sizeof(a));
	while (n--) {
		int i; cin >> i;
		a[i]++;
	}
	int res = 0;
	while (k--) {
		int i = 0;
		while (a[i]) {
			a[i]--;
			i++;
		}
		res += i;
	}
	cout << res << '\n';
	return 0;
}

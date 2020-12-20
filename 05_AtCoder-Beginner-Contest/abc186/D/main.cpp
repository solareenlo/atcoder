#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n);
	int64_t res = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		res += a[i] * i - sum;
		sum += a[i];
	}
	cout << res << '\n';
	return 0;
}

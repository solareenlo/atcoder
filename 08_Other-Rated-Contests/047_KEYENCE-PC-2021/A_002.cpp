#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int64_t a[n], b[n];
	for (int64_t &x : a) cin >> x;
	for (int64_t &x : b) cin >> x;
	int64_t maxi = 0, maxA = 0;
	for (int i = 0; i < n; i++) {
		maxA = max(maxA, a[i]);
		maxi = max(maxi, maxA * b[i]);
		cout << maxi << '\n';
	}
	return 0;
}

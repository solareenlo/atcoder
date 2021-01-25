#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int res = 0;
	if (0 <= k && k <= n) res = k*k*k;
	else if (n <= k && k <= 2*n) res = k*k*k - 3*(k-n)*(k-n)*(k-n);
	else if (2*n <= k && k <= 3*n) res = 6*n*n*n - (3*n-k)*(3*n-k)*(3*n-k);
	else res = 6*n*n*n;
	cout << res << '\n';
	return 0;
}

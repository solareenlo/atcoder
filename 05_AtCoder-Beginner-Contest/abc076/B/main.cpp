#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int res = 10000000;
	for (int i = 1; i <= n; i++) {
		int tmp = 1;
		for (int j = 1; j <= i; j++)
			tmp *= 2;
		tmp += (n - i) * k;
		res = min(res, tmp);
	}
	cout << res << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, x[101];
	while (cin >> n >> k, n && k) {
		for (int i = 0; i < n; i++) cin >> x[i];
		sort(x, x + n);
		cout << accumulate(x, x + k, 0) << '\n';
	}
	return 0;
}

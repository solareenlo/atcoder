#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, e; cin >> n >> t >> e;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		if (x-t%x <= e || t%x <= e) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t; cin >> n >> t;
	int a[n];
	for (int &x : a) cin >> x;
	int res = 0;
	for (int i = 1; i <= t; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (i % a[j] == 0)
				cnt++;
		}
		res = max(res, cnt);
	}
	cout << res << '\n';
	return 0;
}

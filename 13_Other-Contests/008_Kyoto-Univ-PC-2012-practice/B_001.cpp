#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n, greater<>{});
	for (auto x : a) cout << x;
	cout << '\n';
	return 0;
}

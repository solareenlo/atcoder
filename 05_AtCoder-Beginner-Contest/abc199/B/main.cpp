#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int x, l = 0, r = 1e9;
	for (int i=0; i<n; i++) cin >> x, l = max(l, x);
	for (int i=0; i<n; i++) cin >> x, r = min(r, x);
	cout << max(0, r-l+1) << '\n';
	return 0;
}

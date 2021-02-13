#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		int64_t a, b; cin >> a >> b;
		if (a==LONG_MIN && b==-1) cout << (1ULL<<63) << '\n';
		else cout << a/b << '\n';
	}
	return 0;
}

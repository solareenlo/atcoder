#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		int64_t a, b; cin >> a >> b;
		if (a==LLONG_MIN && b==-1LL) cout << "9223372036854775808" << '\n';
		else cout << a/b << '\n';
	}
	return 0;
}

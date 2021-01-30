#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, l, r; cin >> s >> l >> r;
	if (l <= s && s <= r) cout << s << '\n';
	else {
		if (abs(l-s) >= abs(r-s)) cout << r << '\n';
		else cout << l << '\n';
	}
	return 0;
}

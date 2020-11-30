#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int r, g, b; cin >> r >> g >> b;
	int k; cin >> k;

	// 貪欲法
	bool ok = true;
	if (r >= g) {
		while (true) {
			g *= 2;
			k--;
			if (r < g)
				break ;
		}
	}

	if (k < 0) ok = false;
	else {
		if (g >= b) {
			while (true) {
				b *= 2;
				k--;
				if (g < b)
					break ;
			}
		}
	}

	if (k < 0) ok = false;

	if (ok) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}

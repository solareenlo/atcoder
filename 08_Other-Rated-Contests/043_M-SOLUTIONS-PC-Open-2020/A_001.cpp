#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(false);

	int x; cin >> x;
	if (400 <= x && x <= 599)
		cout << 8 << '\n';
	else if (600 <= x && x <= 799)
		cout << 7 << '\n';
	else if (800 <= x && x <= 999)
		cout << 6 << '\n';
	else if (1000 <= x && x <= 1199)
		cout << 5 << '\n';
	else if (1200 <= x && x <= 1399)
		cout << 4 << '\n';
	else if (1400 <= x && x <= 1599)
		cout << 3 << '\n';
	else if (1600 <= x && x <= 1799)
		cout << 2 << '\n';
	else if (1800 <= x && x <= 1999)
		cout << 1 << '\n';
	return 0;
}

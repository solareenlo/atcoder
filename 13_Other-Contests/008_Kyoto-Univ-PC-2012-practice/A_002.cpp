#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n; cin >> m >> n;
	if (m == 0) cout << n + 1;
	if (m == 1) cout << n + 2;
	if (m == 2) cout << 2 * n + 3;
	if (m == 3) cout << (1LL << (n + 3)) - 3;
	cout << '\n';
	return 0;
}

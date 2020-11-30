#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	if (n == 1 && m == 0) {
		cout << "1 2" << '\n';
		return 0;
	}
	if (n >= m + 2 && m >= 0) {
		for (int i = 0; i < n - 1; i++)
			cout << i * 4 + 2 << " " << i * 4 + 4 << '\n';
		cout << "1 " << 4 * m + 5 << '\n';
		return 0;
	}
	cout << "-1" << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int res = 0;
	while (n--) {
		int x; cin >> x;
		res += min(x, abs(x - k)) * 2;
	}
	cout << res << '\n';
	return 0;
}

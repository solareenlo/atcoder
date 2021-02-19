#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int res = 0;
	if (n&1) {
		cout << "error" << '\n';
		return 0;
	}
	while (n) {
		int a, b; cin >> a >> b;
		res += b-a;
		n -= 2;
	}
	cout << res << '\n';
	return 0;
}

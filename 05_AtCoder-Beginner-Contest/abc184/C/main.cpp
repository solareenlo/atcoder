#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int res = 3;
	if (abs(a - c) + abs(b - d) == 0)
		res = 0;
	else if (abs(a - c) + abs(b - d) <= 3
			|| a + b == c + d
			|| a - b == c - d)
		res = 1;
	else if ((a + b + c + d) % 2 == 0
			|| abs(a - c) + abs(b - d) <= 6
			|| abs((a + b) - (c + d)) <= 3
			|| abs((a - b) - (c - d)) <= 3) {
		res = 2;
	}
	cout << res << '\n';
    return 0;
}

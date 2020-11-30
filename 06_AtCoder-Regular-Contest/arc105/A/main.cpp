#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int sum  = a + b + c + d;
	bool ok = false;
	if (sum - a == a) ok = true;
	if (sum - b == b) ok = true;
	if (sum - c == c) ok = true;
	if (sum - d == d) ok = true;
	if (c + d == a + b) ok = true;
	if (b + d == a + c) ok = true;
	if (b + c == a + d) ok = true;
	cout << (ok ? "Yes" : "No") << '\n';
	return 0;
}

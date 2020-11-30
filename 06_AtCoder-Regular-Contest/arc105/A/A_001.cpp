#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int sum = a + b + c + d;
	bool ok = false;
	if (a == sum - a) ok = true;
	if (b == sum - b) ok = true;
	if (c == sum - c) ok = true;
	if (d == sum - d) ok = true;
	if (a+b == c+d) ok = true;
	if (a+c == b+d) ok = true;
	if (a+d == b+c) ok = true;
	cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}

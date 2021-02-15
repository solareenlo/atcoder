#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t b, c; cin >> b >> c;
	int64_t res;
	if (b == 0) res = c;
	else if (c == 0) res = 1;
	else if (c >= 2*llabs(b)) res = c+2*llabs(b)-(b>0);
	else if (c == 1) res = 2;
	else res = 2*c-1;
	cout << res << '\n';
	return 0;
}

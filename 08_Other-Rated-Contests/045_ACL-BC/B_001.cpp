#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b, c, d; cin >> a >> b >> c >> d;
	bool ok = false;
	if ((a <= c && c <= b) || (a <= d && d <= b) || (c <= a && a <= d) || (c <= b && b <= d))
		ok = true;
	cout << ((ok) ? "Yes" : "No") << '\n';
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int n, k, g, maxi, a;
int main() {
	cin >> n >> k >> g;
	maxi = g;
	n--;
	while (n--) {
		cin >> a;
		g = gcd(g, a);
		maxi = max(maxi, a);
	}
	cout << ((k % g == 0 && k <= maxi) ? "POSSIBLE" : "IMPOSSIBLE") << '\n';
	return 0;
}

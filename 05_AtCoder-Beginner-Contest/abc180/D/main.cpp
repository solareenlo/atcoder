#include <bits/stdc++.h>
using namespace std;
long long x, y, a, b, res;
int main() {
	cin >> x >> y >> a >> b;
	while (y / x > a && x * a <= x + b) {
		x *= a;
		res++;
	}
	res += (y - 1 - x) / b;
	cout << res << '\n';
    return 0;
}

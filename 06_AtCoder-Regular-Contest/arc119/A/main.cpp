#include <bits/stdc++.h>
using namespace std;
int64_t n, res, a, b, c;
int main() {
	cin >> n;
	res = 1LL << 60;
	for (int i=0; i<61; i++) {
		a = n / (1LL << i);
		b = i;
		c = n - a * (1LL << i);
		res = min(res, a + b + c);
	}
	cout << res << '\n';
    return 0;
}

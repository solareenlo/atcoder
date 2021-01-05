#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, n; cin >> d >> n;
	int x = pow(100, d);
	if (n == 100)
		cout << x * 101 << '\n';
	else cout << x * n << '\n';
	return 0;
}

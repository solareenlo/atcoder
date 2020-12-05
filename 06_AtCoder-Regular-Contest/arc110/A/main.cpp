#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	ll res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i / gcd(res, i);
	cout << res + 1 << '\n';
	return 0;
}

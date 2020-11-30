#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; cin >> n;
	ll i = 1;
	while (i * (i + 1) / 2 <= n + 1)
		i++;
	cout << 2 + n - i << '\n';
	return 0;
}

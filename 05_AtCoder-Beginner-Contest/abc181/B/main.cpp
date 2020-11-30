#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	ll res = 0;
	while (n--) {
		ll a, b; cin >> a >> b;
		res += (a+b) * (b-a+1) / 2;
	}
	cout << res << '\n';
    return 0;
}

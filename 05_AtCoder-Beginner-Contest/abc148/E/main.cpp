#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;

	ll res = 0;
	if (n % 2) res = 0;
	else {
		ll tmp = 10;
		while (tmp <= n) {
			res += n / tmp;
			tmp *= 5;
		}
	}
	cout << res << '\n';
    return 0;
}

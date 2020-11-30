#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, k; cin >> n >> k;
	ll cnt = 0;
	if (!k) cnt = n * n;
	else {
		for (int b = k + 1; b <= n; b++) {
			ll div = n / b;
			ll rem = n % b;
			cnt += div * max(0LL, b - k) + max(0LL, rem - k + 1);
		}
	}
	cout << cnt << '\n';
    return 0;
}

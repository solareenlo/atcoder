#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, k; cin >> n >> k;

	ll res = 0;
	res = pow(n / k, 3);
	if (k % 2 == 0) {
		int div = (n + k / 2) / k;
		res += pow(div, 3);
	}
	cout << res << '\n';
    return 0;
}

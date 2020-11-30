#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	int n, x, t;
	cin >> n >> x >> t;

	int div = n / x;
	int mod = n % x;

	if (mod) cout << t * (div + 1) << '\n';
	else cout << t * div << '\n';
    return 0;
}

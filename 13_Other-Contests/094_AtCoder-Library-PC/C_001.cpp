#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main() {
	int t; cin >> t;
	while (t--) {
		ll n, m, a, b; cin >> n >> m >> a >> b;
		cout << floor_sum(n, m, a, b) << '\n';
	}
	return 0;
}

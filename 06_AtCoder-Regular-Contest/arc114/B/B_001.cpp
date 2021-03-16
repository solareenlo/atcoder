#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main() {
	int n; cin >> n;
	dsu d(n);
	for (int i = 0; i < n; i++) {
		int f; cin >> f;
		d.merge(i, --f);
	}
	mint res = mint(2).pow(d.groups().size()) - mint(1);
	cout << res.val() << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

	ll k; cin >> k;

	ll cnt = 1;
	ll div = 2;
	ll mod = 1;
	while (cnt < k) {
		int tmp = mod;
		mod = div;
		div += tmp;
		cnt++;
	}
	cout << div << ' ' << mod << '\n';
    return 0;
}

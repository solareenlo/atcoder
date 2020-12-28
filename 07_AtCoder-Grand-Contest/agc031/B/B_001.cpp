#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
	int n; cin >> n;
	int pre = -1;
	int res = 1;
	map<int, int64_t> m;
	while (n--) {
		int c; cin >> c;
		if (c == pre) continue ;
		pre = c;
		m[c] += res % MOD;
		res = m[c] % MOD;
	}
	cout << res << '\n';
    return 0;
}

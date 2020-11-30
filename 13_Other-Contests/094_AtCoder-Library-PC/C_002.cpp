#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
int main() {
	int t; cin >> t;
	while (t--) {
		long long n, m, a, b; cin >> n >> m >> a >> b;
		cout << atcoder::floor_sum(n, m, a, b) << '\n';
	}
	return 0;
}

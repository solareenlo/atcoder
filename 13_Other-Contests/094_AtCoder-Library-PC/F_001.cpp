#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using namespace atcoder;
const int MOD = 998244353;

int main() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	REP(i, n) cin >> a[i];
	REP(i, m) cin >> b[i];
	vector<int> c = convolution<MOD>(a, b);
	REP(i, n + m - 1) cout << c[i] << " ";
	cout << '\n';
	return 0;
}

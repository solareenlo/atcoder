#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

int main() {
	int n; cin >> n;
	vector<mint> a(n), b(n);
	for (int i=0; i<n; i++) {
		int A, B; cin >> A >> B;
		a[i] = mint(A);
		b[i] = mint(B);
	}
	vector<mint> res = convolution(a, b);
	cout << "0\n";
	for (auto a : res)
		cout << a.val() << '\n';
	return 0;
}

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

vector<mint> fact(1, 1), invfact(1, 1);

inline void reserve(int a) {
	while (fact.size() <= a)
		fact.push_back(fact.back() * mint(fact.size()));
	invfact.resize(a+1);
	invfact.back() = fact.back().inv();
	for (int i=invfact.size(); i--;)
		invfact[i-1] = invfact[i]*i;
}

inline mint nCr(int n, int r) {
	if (r<0 || n<r)
		return 0;
	return fact[n]*invfact[n-r]*invfact[r];
}

int main() {
	int64_t n; cin >> n;
	reserve(n);
	mint res = 0;
	for (int64_t i=1; i<=n; i++)
		res += nCr(n, i) * mint(2).pow(n*(n-1)/2-i*(n-i));
	cout << res.val() << '\n';
	return 0;
}

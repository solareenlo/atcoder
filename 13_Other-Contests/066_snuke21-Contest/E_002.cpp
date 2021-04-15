#include <bits/stdc++.h>
#include <atcoder/all>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;
using namespace atcoder;
using mint = modint1000000007;

struct Comb {
	vector<mint> fact, invfact;

	Comb(int N) {
		fact = vector<mint> ({mint(1)});
		invfact = vector<mint>({mint(1)});
		fact_init(N);
	}

	void fact_init(int N) {
		int i0 = fact.size();
		if (i0 >= N+1) return ;
		fact.resize(N+1);
		invfact.resize(N+1);
		for (int i=i0; i<=N; i++)
			fact[i] = fact[i-1]*i;
		invfact[N] = (mint)1/fact[N];
		for (int i=N-1; i>=i0; i--)
			invfact[i] = invfact[i+1]*(i+1);
	}

	mint nCr(int n, int r) {
		if (n<0 || r<0 || r>n) return mint(0);
		if (fact.size() < n+1) fact_init(n);
		return fact[n] * invfact[r] * invfact[n-r];
	}

	mint nPr(int n, int r) {
		if (n<0 || r<0 || r>n) return mint(0);
		if (fact.size() < n+1) fact_init(n);
		return fact[n] * invfact[n-r];
	}

	mint Catalan(int n) {
		if (n<0) return 0;
		else if (n==0) return 1;
		if (fact.size() < 2*n+1) fact_init(2*n);
		return fact[2*n]*invfact[n+1]*invfact[n];
	}
};

int main() {
	int64_t n; cin >> n;
	Comb C(n);
	mint res = 0;
	for (int64_t i=1; i<=n; i++)
		res += C.nCr(n, i) * mint(2).pow(n*(n-1)/2-i*(n-i));
	cout << res.val() << '\n';
	return 0;
}

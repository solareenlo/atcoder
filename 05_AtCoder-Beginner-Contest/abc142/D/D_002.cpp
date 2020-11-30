#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T>
inline vector<pair<T, T> > primeFactorize(T n) {
	vector<pair<T, T> > res;
	for (T a = 2; a * a <= n; a++) {
		if (n % a != 0) continue ;
		T ex = 0;
		while (n % a == 0) {
			++ex;
			n /= a;
		}
		res.push_back({a, ex});
	}
	if (n != 1) res.push_back({n, 1});
	return res;
}

int main() {
	cin.tie(0)->sync_with_stdio(false);

	ll A, B; cin >> A >> B;
	set<ll> a, b;

    const auto &resA = primeFactorize(A);
    for (auto p : resA)
		a.insert(p.first);

    const auto &resB = primeFactorize(B);
    for (auto p : resB)
		b.insert(p.first);

	set<ll> res;
	set_intersection(a.begin(), a.end(),
			b.begin(), b.end(),
			inserter(res, res.end()));

	cout << res.size() + 1 << '\n';
	return 0;
}

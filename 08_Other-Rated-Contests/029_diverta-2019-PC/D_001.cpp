#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T>
inline set<T> divisorsList(T n) {
	set<T> div;
	for (T i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			div.insert(i);
			if (i * i != n)
				div.insert(n / i);
		}
	}
	return div;
}

int main() {
	ll N; cin >> N;
	set<ll> div = divisorsList(N);
	ll res = 0;
	for (auto x : div) {
		if (x != 1) {
			if (N / (x-1) == N % (x-1)) {
				res += x - 1;
			}
		}
	}
	cout << res << '\n';
	return 0;
}

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
	ll n; cin >> n;
    set<ll> div = divisorsList(n);
	for(auto x : div)
		cout << x << '\n';
	return 0;
}

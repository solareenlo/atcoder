#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
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
    cin.tie(0)->sync_with_stdio(false);

	ll n; cin >> n;
	set<ll> div = divisorsList(n);

	ll sum = 0;
	for (auto x : div)
		sum += x;
	sum -= n;

	if (sum == n) cout << "Perfect" << '\n';
	else if (sum > n) cout << "Abundant" << '\n';
	else if (sum < n) cout << "Deficient" << '\n';
    return 0;
}

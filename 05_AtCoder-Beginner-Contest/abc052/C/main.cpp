#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

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

int main(){
    cin.tie(0)->sync_with_stdio(false);

	ll n;
	cin >> n;

	map<ll, ll> p;
	for (ll i = 1; i <= n; i++) {
		vector<pair<ll, ll> > tmp;
		tmp = primeFactorize(i);
		for (auto x : tmp)
			p[x.first] += x.second;
	}

	ll res = 1;
	for (auto x : p) {
		res *= x.second + 1;
		res %= MOD;
	}
	cout << res << '\n';
    return 0;
}

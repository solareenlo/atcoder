#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 1; i < (n); i++)
using namespace std;
using ll = long long;

vector<pair<ll, ll> > prime_factorize(ll N) {
    vector<pair<ll, ll> > res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
	int n; cin >> n;
	ll cnt = 0;
	REP(c, n) {
		const auto &pf = prime_factorize(n - c);
		ll res = 1;
		for (auto p : pf)
			res *= p.second + 1;
		cnt += res;
	}
	cout << cnt << '\n';
	return 0;
}

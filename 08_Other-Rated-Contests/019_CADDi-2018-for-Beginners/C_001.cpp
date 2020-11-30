#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> inline vector<pair<T, T> > primeFactorize(T n) {
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

    ll n, p; cin >> n >> p;

    ll ans = 1;
    if (n == 1) ans = p;
    else {
        auto res = primeFactorize(p);
        for (auto x : res) {
            if (x.second >= n)
                ans *= pow(x.first, (x.second / n));
        }
    }

    cout << ans << '\n';
    return 0;
}

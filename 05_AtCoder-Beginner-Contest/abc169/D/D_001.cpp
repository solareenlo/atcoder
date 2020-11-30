#include <bits/stdc++.h>
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;
    auto fs = primeFactorize(n);
    int ans = 0;
    for (auto p : fs) {
        int x = p.second;
        int b = 1;
        while (b <= x) {
            x -= b;
            b++;
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

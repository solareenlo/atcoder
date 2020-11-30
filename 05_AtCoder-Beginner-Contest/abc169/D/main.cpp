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

    auto pf = primeFactorize(n);

    int count = 0;
    for (auto i : pf) {
        ll p = i.second;
        ll b = 1;
        while (b <= p) {
            p -= b;
            b++;
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}

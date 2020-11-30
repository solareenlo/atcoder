#include "bits/stdc++.h"
using namespace std;

const int mod = 998244353;
struct mint {
    long long x;
    mint(long long x = 0): x((x % mod + mod) % mod) {}
    mint operator-() const {
        return mint(-x);
    }
    mint& operator+=(const mint a) {
        if ((x += a.x) >= mod) {
            x -= mod;
        }
        return *this;
    }
    mint& operator-=(const mint a) {
        if ((x += mod - a.x) >= mod) {
            x -= mod;
        }
        return *this;
    }
    mint& operator*=(const mint a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const {
        return mint(*this) += a;
    }
    mint operator-(const mint a) const {
        return mint(*this) -= a;
    }
    mint operator*(const mint a) const {
        return mint(*this) *= a;
    }
    mint pow(long long t) const {
        if (!t) {
            return 1;
        }
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1) {
            a *= *this;
        }
        return a;
    }

    // for prime mod
    mint inv() const {
        return pow(mod - 2);
    }
    mint& operator/=(const mint a) {
        return *this *= a.inv();
    }
    mint operator/(const mint a) const {
        return mint(*this) /= a;
    }
};
istream& operator>>(istream& is, const mint& a) {
    return is >> a.x;
}
ostream& operator<<(ostream& os, const mint& a) {
    return os << a.x;
}

struct combination {
    vector<mint> fact, ifact;
    combination(int n):fact(n + 1), ifact(n + 1) {
        assert(n < mod);
        fact[0] = 1;
        for (int i = 1; i <= n; ++i) {
            fact[i] = fact[i - 1] * i;
        }
        ifact[n] = fact[n].inv();
        for (int i = n; i >= 1; --i) {
            ifact[i - 1] = ifact[i] * i;
        }
    }
    mint operator()(int n, int k) {
        if (k < 0 || k > n) {
            return 0;
        }
        return fact[n] * ifact[k] * ifact[n - k];
    }
} comb(200005);

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    mint ans = 0;
    mint color = m;
    for (int x = n - 1; x >= 0; --x) {
        mint now = color;
        now *= comb(n - 1, x); // 色のパターンにグループの分け方を掛ける
        if (x <= k) {
            ans += now;
        }
        color *= m - 1; // 色のパターン数を計算してる
    }
    cout << ans << '\n';
    return 0;
}

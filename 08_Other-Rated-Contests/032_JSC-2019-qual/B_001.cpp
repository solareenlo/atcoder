#include <bits/stdc++.h>
#define REP(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;
struct mint {
    long long x;
    mint(long long x = 0): x((x % mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint& operator+=(const mint a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint a) {
        if ((x += mod - a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const mint a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const { return mint(*this) += a; }
    mint operator-(const mint a) const { return mint(*this) -= a; }
    mint operator*(const mint a) const { return mint(*this) *= a; }
    mint pow(long long t) const {
        if (!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1) a *= *this;
        return a;
    }

    // for prime mod
    mint inv() const { return pow(mod - 2); }
    mint& operator/=(const mint a) { return *this *= a.inv(); }
    mint operator/(const mint a) const { return mint(*this) /= a; }
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x; }
ostream& operator<<(ostream& os, const mint& a) { return os << a.x; }

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    int tmp; cin >> tmp;
    mint k = tmp;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    vector<int> cnt(n, 0);
    REP(i, n) REP(j, n)
        if (a[i] > a[j]) cnt[i]++;

    mint sum = 0;
    REP(i, n) sum += cnt[i];

    vector<int> cnt2(n, 0);
    REP(i, n) for (int j = i + 1; j < n; j++)
        if (a[i] > a[j]) cnt2[i]++;

    mint sum2 = 0;
    REP(i, n) sum2 += cnt2[i];

    mint ans = sum * (k - 1) * ((mint)1 + (k - 1)) / (mint)2;
    ans += sum2 * k;

    if (tmp == 1) cout << sum2 << '\n';
    else cout << ans << '\n';
    return 0;
}

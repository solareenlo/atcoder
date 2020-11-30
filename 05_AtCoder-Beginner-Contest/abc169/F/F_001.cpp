#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int mod = 998244353;
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
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    // dp テーブルは1段ごとに使い捨てる方法を採用
    vector<mint> dp(s + 1, 0);

    dp[0] = 1;

    REP(i, n) {
        // 次の dp を用意してる
        vector<mint> p(s + 1, 0); // p が dp[i] で古い方
        swap(dp, p); // dp が dp[i + 1] で更新される方
        REP(j, s + 1) {
            dp[j] += p[j] * 2; // 空集合も含む部分集合の総数
            if (j + a[i] <= s) dp[j + a[i]] += p[j];
        }
    }

    cout << dp[s] << '\n';
    return 0;
    return 0;
}

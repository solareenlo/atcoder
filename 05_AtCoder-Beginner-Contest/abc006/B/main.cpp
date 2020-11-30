#include <iostream>
using namespace std;

const int mod = 10007;
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
    int n;
    cin >> n;

    mint first = 0, second = 0, third = 1;
    mint ans = 0;
    for (int i = 3; i < n; i++) {
        ans = first + second + third;
        first = second;
        second = third;
        third = ans;
    }

    if (n == 1 || n == 2) cout << 0 << '\n';
    else if (n == 3) cout << 1 << '\n';
    else cout << ans << '\n';
    return 0;
}

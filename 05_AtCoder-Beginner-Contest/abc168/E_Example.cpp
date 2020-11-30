#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int mod = 1000000007;
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

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int zero = 0;
    map<pair<ll, ll>, pair<int, int>> mp;

    REP(i, n) {
        ll x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) {
            zero++;
            continue ;
        }
        ll g = gcd(x, y);
        // ベクトルなので単位ベクトルに変換する
        x /= g;
        y /= g;
        // 条件はベクトルの内積が0(2つのベクトルのなす角度が90°)なので，
        // 2つのベクトルを同時に180°回転させても
        // 2つのベクトルのなす角度は変わらないので
        // 180°回転させる
        if (y < 0) {
            x = -x;
            y = -y;
        }
        if (y == 0 && x < 0) {
            x = -x;
            y = -y;
        }
        bool rot90 = false;
        if (x <= 0)
            rot90 = true;
        if (rot90) {
            ll tmp = x;
            x = y;
            y = -tmp;
        }
        if (rot90) // 90°回転させて場合の x, y はこっち
            mp[{x, y}].first++;
        else // 90°回転させてない場合の x, y はこっち
            mp[{x, y}].second++;
    }

    mint ans = 1;
    for (auto p : mp) {
        int s = p.second.first;
        int t = p.second.second;
        mint now = 1; // s, t どちらからも選ばない通り
        now += mint(2).pow(s) - 1; // s のみから1匹以上を選ぶ通り - 全員を選ばない通り
        now += mint(2).pow(t) - 1; // t のみから1匹以上を選ぶ通り - 全員を選ばない通り
        ans *= now;
    }

    ans -= 1; // どのグループからも選ばなかったときの通りを引く
    ans += zero; // (0, 0)単体だけを選ぶ場合を足す

    cout << ans << '\n';
    return 0;
}

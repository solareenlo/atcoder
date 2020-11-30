#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 便利関数
template <class T> inline bool chmin(T &a, T b) {if (a > b){a = b;return true;}return false;}
template <class T> inline bool chmax(T &a, T b) {if (a < b){a = b;return true;}return false;}
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

// 出力
void print() { std::cout << '\n'; }
template <class T>void print(const T &x) {std::cout << x <<'\n';}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}

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

int triboRE(int n) {
    if (n == 0 || n == 1 || n == 2) return 0;
    if (n == 3) return 1;
    else
        return triboRE(n - 1) + triboRE(n - 2) + triboRE(n - 3);
}

void tribo(int n) {
    if (n < 1) return ;
    mint first = 0, second = 0, third = 1;
    mint curr = 0;
    for (int i = 3; i < n; i++) {
        curr = first + second + third;
        first = second;
        second = third;
        third = curr;
    }
    if (n == 1) print(0);
    else if (n == 2) print(0);
    else if (n == 3) print(1);
    else print(curr);
}

void triboDP(int n) {
    mint dp[n];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    for (ll i = 3; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    print(dp[n - 1]);
}

void solve(long long n){
    tribo(n);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    solve(n);
    return 0;
}

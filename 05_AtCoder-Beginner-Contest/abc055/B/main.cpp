#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(vec) (vec).begin(), (vec).end()
#define SUM(...) accumulate(ALL(__VA_ARGS__),0LL)
#define DSUM(...) accumulate(ALL(__VA_ARGS__),0.0)
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

const int INF = 2002002002;
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

void solve(int N){
    mint ans = 1;
    for (int i = 1; i <= N; i++)
        ans *= i;
    print(ans);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    solve(N);
    return 0;
}

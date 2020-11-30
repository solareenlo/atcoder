#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    ll g = gcd(n, m);
    ll l = max(n, m) / g * min(n, m);

    ll ans = l;
    REP(i, g) {
        if (s[(i * n) / g] != t[(i * m) / g]) {
            ans = -1;
            break ;
        }
    }

    cout << ans << '\n';
    return 0;
}

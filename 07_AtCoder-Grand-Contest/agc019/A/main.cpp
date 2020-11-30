#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll q, h, s, d;
    cin >> q >> h >> s >> d;
    ll n;
    cin >> n;

    ll o = min(q * 4, min(h * 2, s));

    ll ans = 0;
    if (o * 2 > d) {
        ans += (n / 2) * d;
        n = n % 2;
    }
    ans += n * o;

    cout << ans << '\n';
    return 0;
}

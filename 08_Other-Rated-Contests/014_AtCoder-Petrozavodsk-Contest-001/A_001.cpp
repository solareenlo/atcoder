#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll x, y; cin >> x >> y;

    ll ans = 0;
    if (x % y == 0) ans = -1;
    else {
        for (ll i = x; i <= (ll)1e18; i += x)
            if (i % y) {
                ans = i;
                break ;
            }
    }

    cout << ans << '\n';
    return 0;
}

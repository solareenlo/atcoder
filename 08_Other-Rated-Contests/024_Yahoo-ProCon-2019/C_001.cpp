#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll k, a, b;
    cin >> k >> a >> b;

    ll ans = 0;
    if (a >= b - 2) ans = k + 1;
    else {
        ll tmp = (k + 1) - a;
        ll div = tmp / 2;
        ll rem = tmp % 2;
        ans = div * (b - a) + rem + a;
    }

    cout << ans << '\n';
    return 0;
}

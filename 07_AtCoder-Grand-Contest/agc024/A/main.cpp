#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll ans = 0;
    if (k % 2) ans = b - a;
    else ans = a - b;

    cout << ans << '\n';
    return 0;
}

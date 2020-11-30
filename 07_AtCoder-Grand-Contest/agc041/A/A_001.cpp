#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, a, b;
    cin >> n >> a >> b;

    ll ans = 0;
    if ((b - a) % 2) ans = min(n - a, b - 1) - (b - a - 1) / 2;
    else ans = (b - a) / 2;

    cout << ans << '\n';
    return 0;
}

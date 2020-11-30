#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll h, w;
    cin >> h >> w;

    ll ans = 0;
    if (h == 1 || w == 1) ans = 1;
    else if (h % 2 == 0 || w % 2 == 0) ans = h * w / 2;
    else ans = h * w / 2 + 1;

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++);
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll x, y;
    cin >> x >> y;

    vector<ll> ans(4, LONG_MAX);
    if (x <= y) ans[0] = y - x;
    if ((-1 * x) <= y) ans[1] = y - (-1 * x) + 1;
    if (x <= (-1 * y)) ans[2] = (-1 * y) - x + 1;
    if ((-1 * x) <= (-1 * y)) ans[3] = (-1 * y) - (-1 * x) + 2;

    ans[0] = min(ans[0], ans[1]);
    ans[0] = min(ans[0], ans[2]);
    ans[0] = min(ans[0], ans[3]);

    cout << ans[0] << '\n';
    return 0;
}

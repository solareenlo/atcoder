#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = 0;
    if (a + b >= c) ans = b + c;
    else ans = a + b + b + 1;

    cout << ans << '\n';
    return 0;
}

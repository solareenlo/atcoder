#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n;
    cin >> n;

    ll ans = 0;
    if (n % 2) ans = n / 2 + 3;
    else ans = n / 2;

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b, c;
    cin >> a >> b >> c;

    ll tmp = 4 * a * b;
    ll tmp2 = c - a - b;
    ll tmp3 = tmp2 * tmp2;

    bool ok = false;
    if (tmp2 > 0 && tmp < tmp3) ok = true;

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

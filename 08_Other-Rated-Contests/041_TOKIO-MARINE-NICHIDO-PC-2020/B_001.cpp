#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;

    if ((v - w) * t >= abs(a - b)) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

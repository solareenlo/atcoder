#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, x;
    cin >> n >> x;

    ll ans;
    if ((long double)n / 3.0 > x) ans = (n - x) + (n - x) / x * 2;
    else if ((long double)n / 2.0 > x) ans = (4 * x) + (x / (n - x - x)) * 2 * (n - x - x);
    else if ((long double)n / 2.0 == x) ans = 3 * x;
    else if ((long double)n * 2.0 / 3.0 > x) ans = (4 * (n - x)) + ((n - x) / (x - (n - x))) * 2 * (x - (n - x));
    else ans = x + (x / (n - x)) * 2 * (n - x);

    cout << ans << '\n';
    return 0;
}

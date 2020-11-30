#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll q, h, s, d;
    cin >> q >> h >> s >> d;
    ll n;
    cin >> n;

    vector<ll> val2(4);
    val2[0] = q * 8;
    val2[1] = h * 4;
    val2[2] = s * 2;
    val2[3] = d;
    sort(val2.begin(), val2.end());

    ll ans = (n / 2) * val2[0];
    if (n % 2) {
        vector<ll> val1(3);
        val1[0] = q * 4;
        val1[1] = h * 2;
        val1[2] = s;
        sort(val1.begin(), val1.end());
        ans += val1[0];
    }

    cout << ans << '\n';
    return 0;
}

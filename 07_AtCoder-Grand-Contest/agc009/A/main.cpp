#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i] >> b[i];

    ll ans = 0;
    for (int i = n; i--;) {
        ll cnt = (a[i] + ans) / b[i];
        ll rem = (a[i] + ans) % b[i];
        if (rem) cnt++;
        ans += b[i] * cnt - (a[i] + ans);
    }

    cout << ans << '\n';
    return 0;
}

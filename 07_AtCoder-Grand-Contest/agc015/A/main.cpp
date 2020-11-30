#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, a, b;
    cin >> n >> a >> b;

    ll ans;
    if (b < a) ans = 0;
    else if (n == 1) {
        if(a != b) ans = 0;
        else ans = 1;
    }
    else if (n == 2) ans = 1;
    else if (a == b) ans = 1;
    else {
        ll num = b - a + 1;
        ans = num + (num - 1) * (n - 2 - 1);
    }

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x;
    cin >> x;

    ll ans = x / (6 + 5) * 2;
    ll div = x % (6 + 5);
    if (div) {
        if (div <= 6) ans += 1;
        else ans += 2;
    }

    cout << ans << '\n';
    return 0;
}

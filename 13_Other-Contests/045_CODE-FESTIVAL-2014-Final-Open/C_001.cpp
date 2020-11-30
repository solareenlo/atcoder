#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a;
    cin >> a;

    ll ans = -1;
    for (ll i = 10; i <= 10000; i++) {
        string s = to_string(i);
        int n = s.size();
        ll tmp = 0;
        REP(j, n) tmp += pow(i, j) * (s[n - 1 - j] - '0');
        if (tmp == a) {
            ans = i;
            break ;
        }
    }

    cout << ans << '\n';
    return 0;
}

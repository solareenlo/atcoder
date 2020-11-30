#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, k;
    cin >> a >> k;

    if (k == 0) cout << (ll)2e12 - a << '\n';
    else {
        int cnt = 0;
        while (a < (ll)2e12) {
            a += 1 + k * a;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}

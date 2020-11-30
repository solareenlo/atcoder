#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    map<ll, ll> p;
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        p[b] = a;
    }

    auto itr = p.begin();
    ll ans = itr->first + itr->second;
    cout << ans << '\n';
    return 0;
}

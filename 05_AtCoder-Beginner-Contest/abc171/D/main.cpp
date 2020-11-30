#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n; cin >> n;
    map<ll, ll> a;
    ll sum = 0;
    REP(i, n) {
        ll tmp; cin >> tmp;
        sum += tmp;
        a[tmp]++;
    }

    ll q; cin >> q;
    vector<ll> b(q), c(q);
    REP(i, q) cin >> b[i] >> c[i];

    REP(i, q) {
        if (a.find(b[i]) != a.end()) {
            sum += a[b[i]] * (c[i] - b[i]);
            a[c[i]] += a[b[i]];
            a[b[i]] = 0;
            cout << sum << '\n';
        } else {
            cout << sum << '\n';
        }
    }
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    vector<ll> a(n); REP(i, n) cin >> a[i];
    vector<ll> b(n); REP(i, n) cin >> b[i];

    vector<ll> diff(n);
    int cnt = 0;
    REP(i, n) {
        if (a[i] >= b[i]) cnt++;
        diff[i] = a[i] - b[i];
    }
    sort(diff.begin(), diff.end(), greater<ll>());

    ll sum = accumulate(diff.begin(), diff.end(), 0LL);

    int ans = 0;
    if (cnt == n) ans = 0;
    else if (sum < 0) ans = -1;
    else {
        ll sumM = 0;
        REP(i, n) {
            if (diff[i] < 0) {
                ans++;
                sumM += abs(diff[i]);
            }
        }
        REP(i, n) {
            sumM -= diff[i];
            ans++;
            if (sumM <= 0) break ;
        }
    }

    cout << ans << '\n';
    return 0;
}

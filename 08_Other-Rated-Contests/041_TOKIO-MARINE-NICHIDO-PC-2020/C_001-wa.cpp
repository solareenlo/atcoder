#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, k; cin >> n >> k;
    vector<ll> a(n, 0);
    REP(i, n) cin >> a[i];

    REP(x, k) {
        vector<ll> cnt(n, 0);
        REP(i, n) {
            ll mini = i - a[i];
            ll maxi = i + a[i];
            for (ll j = mini; j <= maxi; j++)
                if (j >= 0 && j <= n - 1) cnt[j]++;
        }
        a = cnt;
        ll cntMax = 0;
        REP(i, n) if (a[i] == n) cntMax++;
        if (cntMax == n) break ;
    }

    REP(i, n) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}

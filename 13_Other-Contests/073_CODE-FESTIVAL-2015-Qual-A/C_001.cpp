#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    ll t; cin >> t;
    vector<ll> a(n), b(n);
    vector<ll> d(n);
    REP(i, n) {
        ll A, B;
        cin >> A >> B;
        d[i] = A - B;
        a[i] = A;
        b[i] = B;
    }

    sort(d.begin(), d.end(), greater<ll>());

    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll diff = sum - t;

    int ans = 0;
    if (diff <= 0) ans = 0;
    else {
        int i = 0;
        while (true) {
            diff -= d[i];
            i++;
            if (diff <= 0) break ;
            if (i == n) {
                i = -1;
                break ;
            }
        }
        ans = i;
    }

    cout << ans << '\n';
    return 0;
}

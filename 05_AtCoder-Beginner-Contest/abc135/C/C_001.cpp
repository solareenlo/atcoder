#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    REP(i, n + 1) cin >> a[i];

    vector<int> b(n);
    REP(i, n) cin >> b[i];

    ll ans = 0;
    REP(i, n) {
        ans += min(a[i], b[i]);
        if (b[i] - a[i] > 0) {
            int margin = min(b[i] - a[i], a[i + 1]);
            ans += margin;
            a[i + 1] = max(a[i + 1] - margin, 0);
        }
    }

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    ll ans = 0;
    REP(i, n) ans += a[i];
    ans -= n;

    cout << ans << '\n';
    return 0;
}

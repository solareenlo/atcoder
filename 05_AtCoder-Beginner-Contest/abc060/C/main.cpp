#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    ll T;
    cin >> T;

    vector<ll> t(n);
    REP(i, n) cin >> t[i];

    ll res = 0;
    REP(i, n - 1)
        res += min(t[i + 1] - t[i], T);
    res += T;

    cout << res << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n, a, b, c, d, e;
    vector<ll> ts(5);
    cin >> n;
    REP(i, 5) cin >> ts[i];
    sort(ts.begin(), ts.end());

    if (n <= ts[0]) cout << 5 << '\n';
    else {
        if (n % ts[0]) cout << 5 + (n / ts[0]) << '\n';
        else cout << 5 + (n / ts[0]) - 1 << '\n';
    }
    return 0;
}

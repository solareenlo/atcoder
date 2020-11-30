#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, m;
    cin >> n >> m;

    ll res = 0;
    if (2 * n >= m) {
        res = m / 2;
    } else {
        res = n + ((m - 2 * n) / 4);
    }

    cout << res << '\n';
    return 0;
}

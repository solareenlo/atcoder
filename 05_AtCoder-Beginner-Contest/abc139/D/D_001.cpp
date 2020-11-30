#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll ans = 0;
    if (n == 1) ans = 0;
    else {
        if (n % 2) ans = n * (n / 2);
        else ans = n * ((n-1) / 2) + (n / 2);
    }

    cout << ans << '\n';
    return 0;
}

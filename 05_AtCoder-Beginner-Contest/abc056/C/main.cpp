#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll x;
    cin >> x;

    int ans = 0;
    ll sum = 0;
    REP(i, x + 1) {
        sum += i;
        if (sum >= x) {
            ans = i;
            break ;
        }
    }

    cout << ans << '\n';
    return 0;
}

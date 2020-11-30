#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<pair<ll, ll> > drink(n);
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        drink[i] = make_pair(a, b);
    }

    sort(drink.begin(), drink.end());

    ll ans = 0;
    int i = 0;
    while(m > 0) {
        if (drink[i].second <= m) {
            ans += drink[i].first * drink[i].second;
            m -= drink[i].second;
        } else {
            ans += m * drink[i].first;
            break ;
        }
        i++;
    }

    cout << ans << '\n';
    return 0;
}

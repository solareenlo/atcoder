#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<pair<ll, ll> > ab;
    REP(i, n) {
        ll a, b;
        cin >> a >> b;
        ab.push_back(make_pair(b, a));
    }

    sort(ab.begin(), ab.end());

    vector<ll> sum(n, 0);
    REP(i, n) {
        if (i == 0) sum[i] = ab[i].second;
        else sum[i] = sum[i - 1] + ab[i].second;
    }

    bool ok = true;
    REP(i, n)
        if (ab[i].first < sum[i]) ok = false;

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

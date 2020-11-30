#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    vector<ll> s(n + 1, 0LL);
    REP(i, n) s[i + 1] = s[i] + a[i];

    ll sum = s[n];

    int index = 0;
    ll tmp = 0;
    REP(i, n) {
        tmp += a[i];
        if (tmp >= sum / 2) {
            index = i;
            break ;
        }
    }

    ll l = abs((s[index] - s[0]) - (s[n] - s[index]));
    ll r = abs((s[index + 1] - s[0]) - (s[n] - s[index + 1]));

    cout << min(l, r) << '\n';
    return 0;
}

#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

ll nC2(ll n) {
    return n * (n - 1) / 2;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    REP(i, n) cin >> a[i];
    REP(i, n) a[i]--;

    vector<int> count(n);
    REP(i, n) count[a[i]]++;

    ll total = 0;
    REP(i, n) total += nC2(count[i]);

    REP(i, n) {
        ll ans = total;
        ans -= nC2(count[a[i]]);
        count[a[i]]--;
        ans += nC2(count[a[i]]);
        count[a[i]]++;
        cout << ans << '\n';
    }
    return 0;
}

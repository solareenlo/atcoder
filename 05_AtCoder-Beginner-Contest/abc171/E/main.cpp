#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    ll sum = 0;
    REP(i, n) sum ^= a[i];

    vector<ll> b(n);
    REP(i, n) b[i] = sum ^ a[i];

    REP(i, n) {
        cout << b[i];
        if (i != n - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}

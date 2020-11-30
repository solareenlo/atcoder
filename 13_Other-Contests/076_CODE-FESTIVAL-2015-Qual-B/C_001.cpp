#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    vector<int> b(m);
    REP(i, m) cin >> b[i];
    sort(b.begin(), b.end(), greater<int>());

    bool ok = true;
    if (n < m) ok = false;
    else {
        REP(i, m)
            if (a[i] < b[i]) ok = false;
    }

    if (ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

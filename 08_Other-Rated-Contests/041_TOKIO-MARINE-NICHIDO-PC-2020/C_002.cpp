#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k; cin >> n >> k;
    vector<int> a(n, 0);
    REP(i, n) cin >> a[i];

    REP(o, k) {
        vector<int> b(n + 1, 0);
        REP(i, n) {
            int l = max(0, i - a[i]);
            int r = min(n, i + a[i] + 1);
            b[l]++;
            b[r]--;
        }
        REP(i, n) b[i + 1] += b[i];
        b.pop_back();
        if (a == b) break ;
        a = b;
    }

    REP(i, n) {
        cout << a[i];
        if (i != n - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}

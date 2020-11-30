#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> L(n);
    REP(i, n) cin >> L[i];
    sort(L.begin(), L.end());

    int ans = 0;
    REP(b, n) REP(a, b) {
        int ab = L[a] + L[b];
        int r = lower_bound(L.begin(), L.end(), ab) - L.begin();
        int l = b + 1;
        ans += r - l;
    }

    cout << ans << endl;
    return 0;
}

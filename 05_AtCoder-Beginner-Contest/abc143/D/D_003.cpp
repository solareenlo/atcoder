#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
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

    cout << ans << '\n';
    return 0;
}

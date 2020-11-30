#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, c, k;
    cin >> n >> c >> k;

    vector<int> t(n);
    REP(i, n) cin >> t[i];
    sort(t.begin(), t.end());

    int ans = 0;
    REP(i, n) {
        int cnt = 0;
        for (int j = 1; j < c; j++) {
            if (abs(t[i] - t[i + j]) <= k) cnt++;
            else break ;
        }
        i += cnt;
        ans++;
    }

    cout << ans << '\n';
    return 0;
}

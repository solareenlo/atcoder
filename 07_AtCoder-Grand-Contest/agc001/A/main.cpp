#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> l(2 * n);
    REP(i, 2 * n) cin >> l[i];
    sort(l.begin(), l.end());

    int ans = 0;
    REP(i, 2 * n) {
        ans += min(l[i], l[i + 1]);
        i++;
    }

    cout << ans << '\n';
    return 0;
}

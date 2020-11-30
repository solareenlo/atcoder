#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int INF = 1 << 30;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;

    vector<int> c(n, 0);
    vector<vector<int> > a(n, vector<int>(m, 0));
    REP(i, n) {
        cin >> c[i];
        REP(j, m) cin >> a[i][j];
    }

    int ans = INF;
    REP(mask, 1 << n) {
        vector<int> level(m, 0);
        int cost = 0;
        REP(i, n) {
            if ((mask >> i) & 1) {
                cost += c[i];
                REP(j, m) level[j] += a[i][j];
            }
        }
        bool ok = true;
        REP(j, m) if (level[j] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }

    if (ans == INF) cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}

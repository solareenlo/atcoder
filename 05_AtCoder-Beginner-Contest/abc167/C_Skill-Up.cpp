#include "bits/stdc++.h"
#define REP(i, n) for (int i = 0 ; i < (n); i++)
using namespace std;

const int INF = 1 << 30;
int A[12][12];

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);

    REP(i, n) {
        cin >> c[i];
        REP(j, m) {
            cin >> A[i][j];
        }
    }

    int ans = INF;
    REP(s, 1 << n) {
        int cost = 0;
        vector<int> a(m);
        REP(i, n) {
            if (s >> i & 1) {
                cost += c[i];
                REP(j, m) {
                    a[j] += A[i][j];
                }
            }
        }
        bool ok = true;
        REP(j, m) {
            if (a[j] < x) {
                ok = false;
            }
        }
        if (ok) {
            ans = min(ans, cost);
        }
    }

    if (ans == INF) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> col(n);
    REP(i, n) cin >> col[i];

    vector<string> row(9);
    REP(i, n) REP(j, 9)
        row[j].push_back(col[i][j]);

    // REP(i, 9) cout << row[i] << '\n';

    int cntX = 0;
    int cntO = 0;
    REP(i, 9) {
        bool sep = true;
        REP(j, n) {
            if (row[i][j] == 'x') cntX++;
            if (row[i][j] == 'o') {
                if (sep) cntO++;
                sep = false;
            } else sep = true;
        }
    }

    // cout << cntX << '\n';
    // cout << cntO << '\n';
    cout << cntX + cntO << '\n';
    return 0;
}

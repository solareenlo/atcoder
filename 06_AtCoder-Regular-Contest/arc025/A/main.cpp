#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<int> d(7), j(7);
    REP(i, 7) cin >> d[i];
    REP(i, 7) cin >> j[i];

    int res = 0;
    REP(i, 7) {
        if (d[i] >= j[i]) res += d[i];
        else res += j[i];
    }

    cout << res << '\n';
    return 0;
}

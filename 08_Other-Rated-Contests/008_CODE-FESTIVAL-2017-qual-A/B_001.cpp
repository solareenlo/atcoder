#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m, k; cin >> n >> m >> k;

    bool ok = false;
    if (k == 0) ok = true;
    else if (k % n == 0) ok = true;
    else if (k % m == 0) ok = true;
    else {
        REP(i, n) REP(j, m)
            if (i * (m - j) + j * (n - i) == k)
                ok = true;
    }

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    bool ans = true;
    vector<int> t(n), x(n), y(n);
    REP(i, n) {
        cin >> t[i] >> x[i] >> y[i];
        if (t[i] % 2 != (x[i] + y[i]) % 2)
            ans = false;
        if (t[i] < x[i] + y[i])
            ans = false;
    }

    if (ans) {
        REP(i, n - 1) {
            if (t[i + 1] - t[i] < abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]))
                ans = false;
        }
    }

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

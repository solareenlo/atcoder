#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> k(n - 1);
    REP(i, n - 1) cin >> k[i];

    if (n == 2) {
        cout << k[0] << ' ' << k[0] << '\n';
    } else {
        vector<int> a(n - 2);
        REP(i, n - 2) a[i] = min(k[i], k[i + 1]);
        cout << k[0] << ' ';
        REP(i, n - 2)
            cout << a[i] << ' ';
        cout << k[n - 2] << '\n';;
    }

    return 0;
}

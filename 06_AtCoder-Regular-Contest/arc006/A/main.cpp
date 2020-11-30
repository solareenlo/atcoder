#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n = 6;

    vector<int> e(n);
    REP(i, n) cin >> e[i];

    int b;
    cin >> b;

    vector<int> l(n);
    REP(i, n) cin >> l[i];

    int cnt = 0;
    REP(i, n) REP(j, n) {
        if (e[i] == l[j]) cnt++;
    }

    bool bonus = false;
    REP(i, n)
        if (l[i] == b)
            bonus = true;

    if (cnt == 6) cout << 1 << '\n';
    else if (cnt == 5) {
        if (bonus) cout << 2 << '\n';
        else cout << 3 << '\n';
    } else if (cnt == 4) cout << 4 << '\n';
    else if (cnt == 3) cout << 5 << '\n';
    else cout << 0 << '\n';
    return 0;
}

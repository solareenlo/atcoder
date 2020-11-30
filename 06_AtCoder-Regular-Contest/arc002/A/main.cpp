#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int y;
    cin >> y;

    bool ans = false;
    if (y % 4 == 0) ans = true;
    if (y % 100 == 0) ans = false;
    if (y % 400 == 0) ans = true;

    if (ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

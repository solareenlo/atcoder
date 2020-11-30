#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x, y; cin >> x >> y;

    if (x % y) cout << x << '\n';
    else cout << -1 << '\n';
    return 0;
}

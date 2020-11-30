#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x, y, k;
    cin >> x >> y >> k;

    int ans = 0;
    if (k <= y) ans += x + k;
    else ans += y + (x + y) - k;

    cout << ans << '\n';
    return 0;
}

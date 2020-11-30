#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    double l, x, y, s, d;
    cin >> l >> x >> y >> s >> d;

    double ans = 0;
    if (s <= d) {
        ans = (d - s) / (x + y);
        double ans2 = (l - (d - s)) / (y - x);
        if (ans2 > 0)
            ans = min(ans, ans2);
    } else {
        ans = (l - (s - d)) / (x + y);
        double ans2 = (s - d) / (y - x);
        if (ans2 > 0)
            ans = min(ans, ans2);
    }

    printf("%.10f\n", ans);
    return 0;
}

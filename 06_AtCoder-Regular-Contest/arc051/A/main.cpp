#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x1, y1, r;
    cin >> x1 >> y1 >> r;
    int x2, y2, x3, y3;
    cin >> x2 >> y2 >> x3 >> y3;

    bool red = false;
    if (y1 - r < y2 || y1 + r > y3 || x1 - r < x2 || x1 + r > x3)
        red = true;

    bool blue = false;
    double distTL = hypot(x1 - x2, y1 - y3);
    double distTR = hypot(x1 - x3, y1 - y3);
    double distBL = hypot(x1 - x2, y1 - y2);
    double distBR = hypot(x1 - x3, y1 - y2);
    if (distTL > r || distTR > r || distBL > r || distBR > r)
        blue = true;

    if (red) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    if (blue) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

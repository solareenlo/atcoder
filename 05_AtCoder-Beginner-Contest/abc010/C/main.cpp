#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int xa, ya, xb, yb, t, v;
    cin >> xa >> ya >> xb >> yb >> t >> v;

    double maxDist = t * v;

    int n;
    cin >> n;

    bool ans = false;
    REP(i, n) {
        int x, y;
        cin >> x >> y;
        double dist;
        dist = hypot((x - xa), (y - ya)) + hypot((x - xb), (y - yb));
        if (dist <= maxDist) ans = true;
    }

    if (ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}

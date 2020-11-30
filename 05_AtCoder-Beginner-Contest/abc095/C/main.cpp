#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, c;
    int x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = 0;
    if (a + b > 2 * c) {
        if (x == y) ans = 2 * c * x;
        else if (x > y) {
            ans += 2 * c * y;
            if (a >= 2 * c) ans += 2 * c * (x - y);
            else ans += a * (x - y);
        }
        else if (x < y) {
            ans += 2 * c * x;
            if (b >= 2 * c) ans += 2 * c * (y - x);
            else ans += b * (y - x);
        }
    }
    else if (a + b <= 2 * c) {
        ans += a * x + b * y;
    }

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int c, d;
    if (a / 10 == 99 && b / 10 == 10) {
        c = 999;
        d = 100;
    } else if (a / 100 == 9 && b / 100 == 1) {
        c = a % 10 + 990;
        d = b % 10 + 100;
    } else {
        c = a % 100 + 900;
        d = b % 100 + 100;
    }

    int ans = max(c - b, a - d);

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll x, y;
    cin >> x >> y;

    ll cnt = 0;
    if (x == y) {
        cnt = 0;
    } else if (x * y > 0) {
        if (x < y) cnt = y - x;
        else cnt = 2 + x - y;
    } else if (x == 0) {
        if (y > 0) cnt = y;
        else cnt = 1 + abs(y);
    } else if (y == 0) {
        if (x > 0) cnt = x;
        else cnt = 1 + abs(x);
    } else {
        if (abs(x) == abs(y)) cnt = 1;
        else cnt = 1 + abs(abs(x) - abs(y));
    }

    cout << cnt << '\n';
    return 0;
}

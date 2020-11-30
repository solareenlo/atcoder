#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

inline int calDay(int y, int m, int d) {
    int res = 365 * y + y / 4 - y / 100 + y / 400 + (306 * (m + 1)) / 10 + d - 429;
    return res;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int y, m, d;
    cin >> y >> m >> d;

    if (m == 1) {
        y--;
        m = 13;
    }
    if (m == 2) {
        y--;
        m = 14;
    }

    int a = calDay(2014, 5, 17);
    int b = calDay(y, m, d);

    cout << a - b << '\n';
    return 0;
}

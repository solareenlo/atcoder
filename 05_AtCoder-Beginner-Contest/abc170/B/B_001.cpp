#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x, y;
    cin >> x >> y;

    bool ok = false;
    if ((y - 2 * x) % 2 == 0 && (4 * x - y) % 2 == 0)
        if (y - 2 * x >= 0 && 4 * x - y >= 0)
            ok = true;

    puts(ok ? "Yes" : "No");
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int r, g, b, n;
    cin >> r >> g >> b >> n;

    ll cnt = 0;
    REP(i, 3001) REP(j, 3001) {
        if (i * r + j * g <= n)
            if ((n - (i * r + j * g)) % b == 0)
                cnt++;
    }
    cout << cnt << '\n';
    return 0;
}

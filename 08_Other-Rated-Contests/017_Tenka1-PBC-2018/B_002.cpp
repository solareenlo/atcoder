#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    int k; cin >> k;

    REP(i, k) {
        if (i % 2 == 0) {
            b += a / 2;
            a /= 2;
        } else {
            a += b / 2;
            b /= 2;
        }
    }

    cout << a << ' ' << b << '\n';
    return 0;
}

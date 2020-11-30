#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a;
    cin >> a;

    int n = cbrt(1000000);

    bool ok = false;
    REP(i, n + 1) if (i * i * i == a) ok = true;

    if (ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

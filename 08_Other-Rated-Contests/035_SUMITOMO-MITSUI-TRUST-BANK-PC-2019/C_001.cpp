#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x;
    cin >> x;

    int div = x / 100;
    int rem = x % 100;

    bool ok = false;
    if (x < 100) ok = false;
    else if (rem == 0) ok = true;
    else if (x >= div * 100 && x <= div * 105) {
        ok = true;
    }

    if (ok) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}

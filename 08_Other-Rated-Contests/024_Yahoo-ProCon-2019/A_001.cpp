#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    bool ok = false;
    if (k == 1) ok = true;
    else if (n % 2) {
        if (n / 2 + 1 >= k) ok = true;
    } else {
        if (n / 2 >= k) ok = true;
    }

    if (ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    double m = sqrt(n);

    if (floor(m) == m) cout << 0 << '\n';
    else {
        int l = m + 1;
        cout << l * l - n << '\n';
    }
    return 0;
}

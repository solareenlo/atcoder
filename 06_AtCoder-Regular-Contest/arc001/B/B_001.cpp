#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int diff = abs(b - a);
    int div = diff / 10;
    int rem = diff % 10;

    int ans = div;
    if (rem == 1) ans += 1;
    if (rem == 2) ans += 2;
    if (rem == 3) ans += 3;
    if (rem == 4) ans += 2;
    if (rem == 5) ans += 1;
    if (rem == 6) ans += 2;
    if (rem == 7) ans += 3;
    if (rem == 8) ans += 3;
    if (rem == 9) ans += 2;

    cout << ans << '\n';
    return 0;
}

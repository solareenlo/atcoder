#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 1) cout << 0 << '\n';
    else if (a >= b) cout << 1 << '\n';
    else {
        int ans = 1;
        ans += (b - a) / (a - 1);
        if ((b - a) % (a - 1)) ans++;
        cout << ans << '\n';
    }
    return 0;
}

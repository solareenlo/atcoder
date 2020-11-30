#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll ans = 42;
    while (ans < 130000000) {
        ans *= 2;
    }

    cout << ans << '\n';
    return 0;
}

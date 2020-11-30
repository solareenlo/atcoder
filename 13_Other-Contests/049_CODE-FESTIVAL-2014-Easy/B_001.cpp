#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int div = n / 20;
    int rem = n % 20;

    int ans = 0;
    if (rem) {
        if (div % 2) ans = 21 - rem;
        else ans = rem;
    } else {
        if (div % 2) ans = 20;
        else ans = 1;
    }

    cout << ans << '\n';
    return 0;
}

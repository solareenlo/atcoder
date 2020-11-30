#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, x;
    cin >> n >> x;

    int ans = (n - x) * 525 + x * 540;
    cout << ans << '\n';
    return 0;
}

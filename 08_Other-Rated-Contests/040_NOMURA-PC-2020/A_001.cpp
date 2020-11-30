#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;

    int ans = (h2 - h1) * 60 + m2 - m1 - k;
    cout << ans << '\n';
    return 0;
}

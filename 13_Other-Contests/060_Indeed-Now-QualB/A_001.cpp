#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x1, y1;
    int x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    int ans = abs(x1 - x2) + 1 + abs(y1 - y2) + 1 - 1;
    cout << ans << '\n';
    return 0;
}

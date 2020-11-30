#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int h, m;
    cin >> h >> m;

    int ans = 0;
    ans += (17 - h) * 60;
    ans += 60 - m;

    cout << ans << '\n';
    return 0;
}

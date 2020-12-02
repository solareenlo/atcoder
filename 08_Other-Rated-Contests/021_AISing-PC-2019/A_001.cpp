#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, h, w;
    cin >> n >> h >> w;

    int ans = ((n - h) + 1) * ((n - w) + 1);

    cout << ans << '\n';
    return 0;
}

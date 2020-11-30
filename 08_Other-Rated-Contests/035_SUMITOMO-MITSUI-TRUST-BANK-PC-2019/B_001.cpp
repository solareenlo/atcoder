#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int ans = -1;
    REP(i, 50001) {
        if (floor(i * 1.08) == n) {
            ans = i;
            break ;
        }
    }

    if (ans == -1) cout << ":(" << '\n';
    else cout << ans << '\n';
    return 0;
}

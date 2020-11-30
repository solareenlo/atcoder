#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    int a; cin >> a;
    int cnt = 0;
    int ans = 0;
    REP(i, n - 1) {
        int b; cin >> b;
        if (a == b) cnt++;
        else {
            if (cnt > 0) ans += (cnt + 1) / 2;
            cnt = 0;
        }
        a = b;
    }
    if (cnt > 0) ans += (cnt + 1) / 2;

    cout << ans << '\n';
    return 0;
}

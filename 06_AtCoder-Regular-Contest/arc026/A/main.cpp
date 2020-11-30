#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    if (n <= 5) ans += n * b;
    else {
        ans += 5 * b;
        ans += (n - 5) * a;
    }

    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    bool ans = true;
    int day = 0;
    REP(i, m) {
        if (n <= a) n += b;
        int c;
        cin >> c;
        n -= c;
        if (n < 0) {
            ans = false;
            day = i + 1;
            break ;
        }
    }

    if (ans) cout << "complete" << '\n';
    else cout << day << '\n';
    return 0;
}

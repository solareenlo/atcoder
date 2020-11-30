#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    REP(i, n) cin >> p[i];

    int mini = 1001;
    int ans = 1000;
    for (int i = -1; i < 102; i++) {
        int tmp;
        if (find(p.begin(), p.end(), i) == p.end())
            tmp = abs(x - i);
        if (tmp < mini) {
            mini = tmp;
            ans = i;
        } else if (tmp == mini) {
            if (i < ans) ans = i;
        }
    }
    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    REP(i, n) cin >> p[i];

    P ans(1001, -1);
    for (int i = -1; i < 102; i++) {
        if (find(p.begin(), p.end(), i) == p.end()) {
            int diff = abs(x - i);
            ans = min(ans, P(diff, i));
        }
    }
    cout << ans.second << '\n';
    return 0;
}

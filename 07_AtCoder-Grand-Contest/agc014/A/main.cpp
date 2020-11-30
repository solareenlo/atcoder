#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<int> n(3);
    REP(i, 3) cin >> n[i];

    vector<int> r(3);
    REP(i, 3) r[i] = n[i] % 2;

    int rSum = accumulate(r.begin(), r.end(), 0);

    if (rSum == 0 && n[0] == n[1] && n[1] == n[2]) cout << -1 << '\n';
    else if (rSum > 0) cout << 0 << '\n';
    else {
        int cnt = 0;
        while (true) {
            int sum;
            REP(i, 3) sum += n[i] % 2;
            if (sum > 0) break ;
            vector<int> h(3);
            REP(i, 3) h[i] = n[i] / 2;
            n[0] = h[0] + h[1];
            n[1] = h[1] + h[2];
            n[2] = h[2] + h[0];
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    int a, b; cin >> a >> b;
    vector<int> p(n);
    REP(i, n) cin >> p[i];

    int cnt1, cnt2, cnt3;
    cnt1 = cnt2 = cnt3 = 0;
    REP(i, n) {
        if (p[i] <= a) cnt1++;
        else if (p[i] <= b) cnt2++;
        else cnt3++;
    }

    int ans = min({cnt1, cnt2, cnt3});
    cout << ans << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> cnt(6, 0);
    REP(i, n) {
        double M, m;
        cin >> M >> m;
        if (M >= 35) cnt[0]++;
        if (M < 35 && M >= 30) cnt[1]++;
        if (M < 30 && M >= 25) cnt[2]++;
        if (m >= 25) cnt[3]++;
        if (m < 0 && M >= 0) cnt[4]++;
        if (M < 0) cnt[5]++;
    }

    REP(i, 6) {
        cout << cnt[i];
        if (i != 5) cout << ' ';
    }
    cout << '\n';
    return 0;
}

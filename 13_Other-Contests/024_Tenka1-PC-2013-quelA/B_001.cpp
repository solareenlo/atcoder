#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > a(n, vector<int>(5));
    REP(i, n) REP(j, 5) cin >> a[i][j];

    int cnt = 0;
    REP(i, n) {
        int sum = 0;
        REP(j, 5) sum += a[i][j];
        if (sum >= 0 && sum < 20)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> r(n);
    REP(i, n) cin >> r[i];
    sort(r.begin(), r.end());

    double ans = 0.0;
    REP(i, k) {
        ans = (ans + r[n - 1 - (k - 1 - i)]) / 2.0;
    }

    printf("%.10f\n", ans);
    return 0;
}

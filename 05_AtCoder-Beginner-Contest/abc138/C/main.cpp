#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<double> v(n);
    REP(i, n) cin >> v[i];
    sort(v.begin(), v.end());

    double ans = v[0];
    REP(i, n - 1)
        ans = (ans + v[i + 1]) / 2.0;

    printf("%.10f\n", ans);
    return 0;
}

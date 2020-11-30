#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double ans = abs((xa*yb + xb*yc + xc*ya - ya*xb - yb*xc - yc*xa) / 2.0);
    printf("%.10f\n", ans);
    return 0;
}

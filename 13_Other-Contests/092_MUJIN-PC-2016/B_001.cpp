#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<double> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());

    double sum = a[0] + a[1] + a[2];

    double r = 0;
    if (a[0] + a[1] >= a[2]) r = 0;
    else r = a[2] - (a[0] + a[1]);

    double ans = (pow(sum, 2) - pow(r, 2)) * PI;
    printf("%.10f\n", ans);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double a, b, x;
    cin >> a >> b >> x;

    if (x == pow(a, 2) * b) {
        double ans = 0;
        printf("%.10f\n", ans);
    } else if (x < pow(a, 2) * b / 2) {
        double tmp = 2.0 * x / b / a;
        double angle = atan2(tmp, b) * 180.0 / PI;
        printf("%.10f\n", 90.0 - angle);
    } else if (x == pow(a, 2) * b / 2) {
        double ans = 45;
        printf("%.10f\n", ans);
    } else {
        double tmp = (pow(a, 2) * b - x) * 2.0 / a / a;
        double angle = atan2(tmp, a) * 180.0 / PI;
        printf("%.10f\n", angle);
    }
    return 0;
}

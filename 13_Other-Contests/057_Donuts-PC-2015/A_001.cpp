#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
    cin.tie(0)->sync_with_stdio(false);

    double r, d;
    cin >> r >> d;

    double area = r * r * PI;
    double circumference = 2.0 * d * PI;
    double ans = area * circumference;
    printf("%.10f\n", ans);
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    double r;
    cin >> r;

    double ans = 2.0 * r * PI;
    printf("%.2f\n", ans);
    return 0;
}

#include "bits/stdc++.h"
using namespace std;
using P = pair<double, double>;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, h, m;
    cin >> a >> b >> h >> m;

    P coorA, coorB;
    if ((h == 0 && m == 0) || (h == 6 && m == 0))
        coorA.first = 0.0;
    else
        coorA.first = a * cos(M_PI / 2.0 - ((double)h + (double)m / 60.0) / 12.0 * 2.0 * M_PI);
    if ((h == 3 && m == 0) || (h == 9 && m == 0))
        coorA.second = 0.0;
    else
        coorA.second = a * sin(M_PI / 2.0 - ((double)h + (double)m / 60.0) / 12.0 * 2.0 * M_PI);

    if (m == 0 || m == 30)
        coorB.first = 0.0;
    else
        coorB.first = b * cos(M_PI / 2.0 - (double)m / 60.0 * 2.0 * M_PI);
    if (m == 15 || m == 45)
        coorB.second = 0.0;
    else
        coorB.second = b * sin(M_PI / 2.0 - (double)m / 60.0 * 2.0 * M_PI);

    double dist = sqrt(pow(coorA.first - coorB.first, 2) + pow(coorA.second - coorB.second, 2));
    // cout << coorA.first << ' ' << coorA.second << '\n';
    // cout << coorB.first << ' ' << coorB.second << '\n';
    printf("%.12f\n", dist);
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (0); i++)
using namespace std;
using ll = long long;

const double PI = acos(-1);

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int x;
    cin >> x;

    pair<double, double> c(0.0, 0.0);
    double dist = 1.0;
    double a;
    a = 0.0;
    c.first = dist * cos(a);
    c.second = dist * sin(a);
    // cout << c.first << ' ' << c.second << '\n';
    int cnt = 1;
    while (true) {
        int angle = (x * cnt) % 360;
        double rad = (double)angle * PI / 180.0;
        if (angle == 90 || angle == 270) c.first += dist * 0;
        else c.first += dist * cos(rad);
        if (angle == 0 || angle == 180) c.second += dist * 0;
        else c.second += dist * sin(rad);
        // cout << c.first << ' ' << c.second << '\n';
        cnt++;
        double eX = abs(0 - c.first);
        double eY = abs(0 - c.second);
        if (eX <= (double)1e-10 && eY <= (double)1e-10) break ;
    }

    cout << cnt << '\n';
    return 0;
}

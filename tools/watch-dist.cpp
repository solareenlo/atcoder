// アナログ時計の長針と短針の頂点の距離を計算する
#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, h, m;
    cin >> a >> b >> h >> m;

    double th = double(h*60 + m) / 720 * 2*PI;
    double tm = double(m) / 60 * 2*PI;
    double xh = cos(th) * a;
    double yh = sin(th) * a;
    double xm = cos(tm) * b;
    double ym = sin(tm) * b;
    double dist = hypot(xh - xm, yh - ym);
    printf("%.9f\n", dist);
    return 0;
}

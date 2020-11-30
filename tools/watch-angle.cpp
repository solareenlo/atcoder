// アナログ時計の長針と短針の角度を計算する
#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1);

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int m;
    cin >> m;

    double th = double(n*60 + m) / 720 * 2*PI;
    double tm = double(m) / 60 * 2*PI;
    double xh = cos(th), yh = sin(th);
    double xm = cos(tm), ym = sin(tm);
    // 2つのベクトルのなす角を計算する
    double ans = acos((xh*xm + yh*ym)/(sqrt(xh*xh + yh*yh)*sqrt(xm*xm + ym*ym)));
    // 度数法で出力する
    cout << ans * 180.0 / PI << '\n';

    return 0;
}

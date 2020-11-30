#include <iostream>
#include <cmath>
using namespace std;
const double PI = acos(-1);

void solve(long long n, long long m){
    double th = double(n*60 + m) / 720 * 2*PI;
    double tm = double(m) / 60 * 2*PI;
    double xh = cos(th), yh = sin(th);
    double xm = cos(tm), ym = sin(tm);
    double ans = acos((xh*xm + yh*ym)/(sqrt(xh*xh + yh*yh)*sqrt(xm*xm + ym*ym)));
    cout << ans * 180.0 / PI << '\n';
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long n;
    scanf("%lld",&n);
    long long m;
    scanf("%lld",&m);
    solve(n, m);
    return 0;
}

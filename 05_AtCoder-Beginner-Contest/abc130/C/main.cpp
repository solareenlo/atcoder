#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double w, h;
    cin >> w >> h;
    double x, y;
    cin >> x >> y;

    double ans = w * h / 2;
    if (x == w / 2 && y == h / 2) printf("%.10f 1\n", ans);
    else printf("%.10f 0\n", ans);
    return 0;
}

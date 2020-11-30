#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a;
    cin >> a;
    double b;
    cin >> b;
    // double から long long への cast は切り捨てが発生するので，0.5を足してる．
    // 0.9999999999999 とかが 0 になっちゃう．
    ll intB = b * 100 + 0.5;
    a *= intB;
    a /= 100;
    printf("%lld\n", a);
    return 0;
}

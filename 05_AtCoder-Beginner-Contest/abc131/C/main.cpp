#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

template<class T> inline T lcm(T a, T b) {
    return a * b / gcd(a, b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll l = lcm(c, d);
    ll divL = (b / l) - ((a - 1) / l);
    ll divC = (b / c) - ((a - 1) / c);
    ll divD = (b / d) - ((a - 1) / d);

    ll ans = (b - a + 1) - (divC + divD - divL);
    cout << ans << '\n';
    return 0;
}

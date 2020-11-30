#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> inline T gcdExtended(T a, T b, T &x, T &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    T d = gcdExtended(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main() {
    ll a, b, x, y;
    cin >> a >> b;
    ll g = gcdExtended(a, b, x, y);
    cout << a << '*' << x << '+' << b << '*' << y << '=' << g << '\n';
    return 0;
}

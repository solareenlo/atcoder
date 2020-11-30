#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n, x;
    cin >> n >> x;

    cout << 3 * (n - gcd(n, x)) << '\n';
    return 0;
}

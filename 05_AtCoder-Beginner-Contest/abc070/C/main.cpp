#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
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

    int n;
    cin >> n;

    ll ans;
    cin >> ans;
    REP(i, n - 1) {
        ll tmp;
        cin >> tmp;
        ll g = gcd(ans, tmp);
        ans /= g;
        ans *= tmp;
    }

    cout << ans << '\n';
    return 0;
}

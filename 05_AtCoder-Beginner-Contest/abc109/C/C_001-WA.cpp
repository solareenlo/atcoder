#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, X;
    cin >> n >> X;

    vector<int> x(n);
    REP(i, n) cin >> x[i];
    sort(x.begin(), x.end());

    if (n == 1) {
        cout << abs(x[0] - X) << '\n';
        return 0;
    }

    vector<int> diff(n - 1);
    REP(i, n - 1) diff[i] = x[i + 1] - x[i];

    int g = gcd(diff[0], diff[0]);
    REP(i, n)
        g = gcd(g, diff[i]);

    g = gcd(g, abs(X - x[0]));

    cout << g << '\n';
    return 0;
}

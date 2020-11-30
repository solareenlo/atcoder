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

    if (n == 1) {
        cout << abs(X - x[0]) << '\n';
        return 0;
    }

    int g = gcd(abs(X - x[0]), abs(X - x[0]));
    REP(i, n) g = gcd(g, abs(X - x[i]));

    cout << g << '\n';
    return 0;
}

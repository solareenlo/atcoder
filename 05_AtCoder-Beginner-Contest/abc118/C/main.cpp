#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int tmp;
    cin >> tmp;
    int g = gcd(tmp, tmp);
    REP(i, n - 1) {
        int tmp;
        cin >> tmp;
        g = gcd(g, tmp);
    }

    cout << g << '\n';
    return 0;
}

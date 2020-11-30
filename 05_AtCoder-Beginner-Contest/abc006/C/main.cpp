#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int a, b, c;
    a = b = c = -1;

    int diff = m - (3 * n);

    if (diff == 0) {
        a = c = 0;
        b = n;
    } else if (diff > 0) {
        if (diff <= n) {
            a = 0;
            b = n - diff;
            c = diff;
        }
    } else {
        if (abs(diff) <= n) {
            a = abs(diff);
            b = n - abs(diff);
            c = 0;
        }
    }

    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}

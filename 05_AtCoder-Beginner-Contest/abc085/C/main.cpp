#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, y;
    cin >> n >> y;
    y /= 1000;

    bool ans = false;
    int a, b, c;
    a = b = c = 0;
    REP(i, n + 1) REP(j, n + 1) {
        if (n - i - j >= 0) {
            if (i * 10 + j * 5 + (n - i - j) == y) {
                ans = true;
                a = i;
                b = j;
                c = n - i - j;
            }
        }
    }

    if (ans) cout << a << ' ' << b << ' ' << c << '\n';
    else cout << -1 << ' ' << -1 << ' ' << -1 << '\n';
    return 0;
}

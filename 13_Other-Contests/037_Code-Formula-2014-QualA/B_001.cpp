#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    vector<int> p(a), q(b);
    REP(i, a) cin >> p[i];
    REP(i, b) cin >> q[i];

    vector<char> pin(11, 'x');
    REP(i, a) pin[p[i]] = '.';
    REP(i, b) pin[q[i]] = 'o';
    pin[10] = pin[0];

    for (int i = 7; i <= 10; i++)
        cout << pin[i] << ' ';
    cout << '\n' << ' ';
    for (int i = 4; i <= 6; i++)
        cout << pin[i] << ' ';
    cout << '\n' << ' ' << ' ';
    for (int i = 2; i <= 3; i++)
        cout << pin[i] << ' ';
    cout << '\n' << ' ' << ' ' << ' ' << pin[1] << '\n';
    return 0;
}

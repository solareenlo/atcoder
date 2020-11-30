#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b;
    cin >> a >> b;

    if (a * b < 0) cout << b - a - 1 << '\n';
    else cout << b - a << '\n';
    return 0;
}

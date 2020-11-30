#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll a, b;
    cin >> a >> b;

    if (a * b == 0) {
        cout << "Zero" << '\n';
        return 0;
    } else if (a * b < 0) {
        cout << "Zero" << '\n';
        return 0;
    } else if (a > 0 && b > 0) {
        cout << "Positive" << '\n';
    } else {
        ll cnt = abs(a - b) + 1;
        if (cnt % 2) cout << "Negative" << '\n';
        else cout << "Positive" << '\n';
        return 0;
    }
    return 0;
}

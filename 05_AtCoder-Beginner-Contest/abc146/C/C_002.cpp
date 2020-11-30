#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll a, b, x;
    cin >> a >> b >>x;

    ll l = 0;
    ll r = 1000000001;

    auto digit = [](ll num) {
        int count = 0;
        while (num) {
            num /= 10;
            count++;
        }
        return count;
    };

    while (r - l > 1) {
        ll mid = (l + r) / 2;
        ll tmp = a * mid + b * digit(mid);
        if (tmp <= x) l = mid;
        else r = mid;
    }

    cout << l << '\n';
    return 0;
}

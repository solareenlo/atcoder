#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int cnt = 1;
    int sign = 0;
    REP(i, n - 1) {
        int diff = a[i + 1] - a[i];
        if (diff == 0) continue ;
        if (sign) {
            if (sign * diff < 0) {
                sign = 0;
                cnt++;
            }
        } else {
            if (diff > 0) sign = 1;
            else sign = -1;
        }
    }

    cout << cnt << '\n';
    return 0;
}

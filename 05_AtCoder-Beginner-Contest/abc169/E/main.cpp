#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i] >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    if (n % 2) {
        int l = a[n / 2];
        int r = b[n / 2];
        ans = r - l + 1;
    } else {
        int l = a[n / 2 - 1] + a[n / 2];
        int r = b[n / 2 - 1] + b[n / 2];
        ans = r - l + 1;
    }

    cout << ans << '\n';
    return 0;
}

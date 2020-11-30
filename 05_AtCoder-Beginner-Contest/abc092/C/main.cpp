#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n + 2, 0);
    REP(i, n) cin >> a[i + 1];

    int sum = 0;
    REP(i, n + 1) sum += abs(a[i] - a[i + 1]);

    for (int i = 1; i < n + 1; i++) {
        int l = min(a[i - 1], a[i + 1]);
        int r = max(a[i - 1], a[i + 1]);
        if (a[i] >= l && a[i] <= r) cout << sum << '\n';
        else if (a[i] < l) cout << sum - (l - a[i]) * 2 << '\n';
        else if (a[i] > r) cout << sum - (a[i] - r) * 2 << '\n';
    }
    return 0;
}

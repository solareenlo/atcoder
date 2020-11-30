#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int cnt = 0;
    REP(i, n) {
        k -= a[i];
        cnt++;
        if (k <= 0) break ;
    }

    cout << cnt << '\n';
    return 0;
}

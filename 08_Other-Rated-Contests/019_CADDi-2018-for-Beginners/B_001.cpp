#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    int h, w; cin >> h >> w;
    vector<int> a(n), b(n);
    REP(i, n) cin >> a[i] >> b[i];

    int cnt = 0;
    REP(i, n)
        if (a[i] >= h && b[i] >= w) cnt++;

    cout << cnt << '\n';
    return 0;
}

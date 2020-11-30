#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> b(n - 1);
    REP(i, n - 1) cin >> b[i];

    int ans = 0;
    REP(i, n - 2) ans += min(b[i], b[i + 1]);

    ans += b[0];
    ans += b[n - 2];

    cout << ans << '\n';
    return 0;
}

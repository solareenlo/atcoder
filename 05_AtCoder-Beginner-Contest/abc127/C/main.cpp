#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<int> l(m), r(m);
    REP(i, m) cin >> l[i] >> r[i];

    int mini = 100001;
    int maxi = 0;
    REP(i, m) {
        maxi = max(maxi, l[i]);
        mini = min(mini, r[i]);
    }

    if (mini - maxi < 0) cout << 0 << '\n';
    else cout << mini - maxi + 1 << '\n';
    return 0;
}

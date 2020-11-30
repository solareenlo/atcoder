#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0)->sync_with_stdio(false);

    int t; cin >> t;

    int n; cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int m; cin >> m;
    vector<int> b(m);
    REP(i, m) cin >> b[i];

    bool ok = true;

    if (n < m) ok = false;
    else {
        int cnt = 0;
        REP(i, m) {
            REP(j, (int)a.size()) {
                if (a[j] <= b[i] && a[j] + t >= b[i]) {
                    cnt++;
                    a.erase(a.begin() + j);
                    break ;
                }
            }
        }
        if (cnt != m) ok = false;
    }

    if (ok) cout << "yes" << '\n';
    else cout << "no" << '\n';
    return 0;
}

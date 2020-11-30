#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> t(n);
    REP(i, n) cin >> t[i];

    bool ans = false;
    int index = -1;
    REP(i, n - 2) {
        if (t[i] + t[i + 1] + t[i + 2] < k) {
            ans = true;
            index = i + 3;
            break ;
        }
    }

    if (ans) cout << index << '\n';
    else cout << -1 << '\n';
    return 0;
}

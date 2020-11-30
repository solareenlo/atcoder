#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> t(n);
    REP(i, n) cin >> t[i];
    sort(t.begin(), t.end());

    if (n == 1) cout << t[0] << '\n';
    else if (n == 2) {
        int maxi = max(t[0], t[1]);
        cout << maxi << '\n';
    } else if (n == 3) {
        int maxi = max(t[0] + t[1], t[2]);
        cout << maxi << '\n';
    } else {
        int maxi1 = max(t[3], t[0] + t[1] + t[2]);
        int maxi2 = max(t[0] + t[3], t[1] + t[2]);
        int mini = min(maxi1, maxi2);
        cout << mini << '\n';
    }
    return 0;
}

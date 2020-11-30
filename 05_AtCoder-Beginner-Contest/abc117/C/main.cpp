#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    vector<int> x(m);
    REP(i, m) cin >> x[i];
    sort(x.begin(), x.end());

    if (n >= m) cout << 0 << '\n';
    else {
        vector<int> diff(m - 1, 0);
        REP(i, m - 1)
            diff[i] = abs(x[i] - x[i + 1]);
        sort(diff.begin(), diff.end());

        ll sum = 0;
        REP(i, m - n)
            sum += diff[i];

        cout << sum << '\n';
    }
    return 0;
}

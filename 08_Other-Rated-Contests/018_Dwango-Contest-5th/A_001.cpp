#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using P = pair<double, int>;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int sum = accumulate(a.begin(), a.end(), 0);

    double ave = sum / (double)n;

    P ans(101, 101);
    REP(i, n) {
        double diff = abs((double)a[i] - ave);
        ans = min(ans, P(diff, i));
    }

    cout << ans.second << '\n';
    return 0;
}

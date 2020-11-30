#include "bits/stdc++.h"
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(void) {
    int n, m;
    cin >> n >> m;
    vector<P> ans;
    if (n % 2) {
        for (int l = 1, r = n - 1; l < r; l++, r--)
            ans.emplace_back(l, r);
    } else {
        bool flag = false;
        for (int l = 1, r = n - 1; l < r; l++, r--) {
            if (!flag && r - l <= n / 2) {
                --r;
                flag = true;
            }
            ans.emplace_back(l, r);
        }
    }
    rep(i, m)
        cout << ans[i].first << ' ' << ans[i].second << endl;
    return 0;
}

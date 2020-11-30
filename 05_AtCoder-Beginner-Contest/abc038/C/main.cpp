#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    /* 入力受け取り */
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    /* しゃくとり法 */
    ll res = 0;
    int right = 1; // [0, 1) は確実に条件を満たす
    for (int left = 0; left < n; ++left) {
        // right を 1 個進めたものが条件を満たすかどうか
        while (right < n && (right <= left || a[right - 1] < a[right])) {
            ++right;
        }
        res += right - left;
        if (left == right) ++right;
    }

    cout << res << endl;
}

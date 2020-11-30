#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<ll> a(n); REP(i, n) cin >> a[i];
        string s; cin >> s;

        int ans = 0;
        vector<ll> dp;
        // 最終的な結果から逆算して行って，
        // 現在の要素が最終的な結果を0にすることが可能な要素かどうかを確認していく
        for (int i = n; i--;) {
            // 後ろから見て行った要素が
            // 最終的な結果を0にできる要素群に含まれるかを確認する．
            // 排他的論理和が0なら含まれているし，
            // 0以外なら含まれていないことになる．
            for (ll j : dp) a[i] = min(a[i], a[i]^j);
            if (a[i]) {
                // 排他的論理和は同じものを掛けると消せるので
                // 最終的には0の状態にしたいので，
                // s[i]が0の時の要素が，最終的な結果を0の状態にできる要素になる．
                if (s[i] == '0') dp.push_back(a[i]);
                else {
                    ans = 1;
                    break ;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

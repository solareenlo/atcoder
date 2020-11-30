#include <bits/stdc++.h>
#define REP(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using ll = long long;

inline ll cntSeq(string s) {
    ll cnt = 0;
    ll num = 0;
    REP(i, s.size() - 1) {
        if (s[i] == s[i + 1]) cnt++;
        else {
            if (cnt > 0) {
                cnt++;
                num += cnt / 2;
            }
            cnt = 0;
        }
    }
    if (cnt > 0) {
        cnt++;
        num += cnt / 2;
    }
    return num;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    ll n = s.size();
    ll k; cin >> k;

    ll cnt1 = cntSeq(s);
    ll cnt2 = cntSeq(s + s);

    ll cnt = 0;
    REP(i, n - 1)
        if (s[i] == s[i + 1]) cnt++;

    ll res = 0;
    if (cnt == n - 1) res = (n * k) / 2;
    else if (s[0] != s[n - 1]) res = cnt1 * k;
    else {
        if (cnt1 * 2 == cnt2) res = cnt1 * k;
        else {
            res = (cnt2 - cnt1) * (k - 1);
            res += cnt1;
        }
    }

    cout << res << '\n';
    return 0;
}

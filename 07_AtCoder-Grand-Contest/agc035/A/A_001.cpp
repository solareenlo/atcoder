#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll n; cin >> n;

    ll cnt0 = 0;
    map<ll, ll> hat;
    REP(i, n) {
        ll tmp; cin >> tmp;
        if (tmp == 0) cnt0++;
        hat[tmp]++;
    }

    bool ok = false;
    if (cnt0 == n) ok = true;
    else if (hat.size() == 2) {
        if (hat.count(0)) {
            ll cnt = 0;
            for (auto i : hat)
                if (i.first != 0) cnt = i.second;
            if (cnt0 * 2 == cnt) ok = true;
        }
    }
    else if (hat.size() == 3) {
        ll val[3];
        ll cnt[3];
        ll i = 0;
        for (auto itr : hat) {
            val[i] = itr.first;
            cnt[i] = itr.second;
            i++;
        }
        if (cnt[0] == cnt[1] && cnt[1] == cnt[2])
            if (((val[0] ^ val[1]) ^ val[2]) == 0)
                ok = true;
    }

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

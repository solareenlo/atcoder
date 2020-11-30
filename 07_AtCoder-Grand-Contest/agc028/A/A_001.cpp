#include <bits/stdc++.h>
#define REP(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> inline T gcd(T a, T b) {
    if (b == 0) return a;
    return  gcd(b, a % b);
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;
    string s, t;
    cin >> s >> t;

    ll ans = 0;
    if (s[0] != t[0]) ans = -1;
    else {
        ll L = (max(N, M) / gcd(N, M)) * min(N, M);

        map<ll, char> tmpS;
        tmpS[0] = s[0];
        for (ll i = 1; i < N; i++)
            tmpS[(L / N) * i] = s[i];

        map<ll, char> tmpT;
        tmpT[0] = t[0];
        for (ll i = 1; i < M; i++)
            tmpT[(L / M) * i] = t[i];

        bool ok = true;
        for (auto i : tmpS) {
            if (tmpT.count(i.first))
                if (tmpT[i.first] != i.second) {
                    ok = false;
                    break ;
                }
        }

        if (ok) ans = L;
        else ans = -1;
    }

    cout << ans << '\n';
    return 0;
}

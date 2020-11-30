#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    vector<ll> l(n, 0);
    REP(i, n) if (s[i] == '<') l[i] = 1;
    REP(i, n - 1)
        if (l[i + 1] != 0 && l[i] != 0)
            l[i + 1] += l[i];

    vector<ll> r(n, 0);
    for (int i = n - 1; i >=0; i--)
        if (s[i] == '>') r[i] = 1;
    for (int i = n - 1; i >0; i--)
        if (r[i - 1] != 0 && r[i] != 0)
            r[i - 1] += r[i];

    vector<ll> tmp(n, 0);
    REP(i, n)
        if (l[i] != 0) tmp[i] = l[i];
        else tmp[i] = r[i];

    vector<ll> res;
    REP(i, n - 1) {
        if (s[i] == '<' && s[i + 1] == '>') {
            res.push_back(max(tmp[i], tmp[i + 1]));
            i++;
        } else res.push_back(tmp[i]);
        if (s[i] == '>' && s[i + 1] == '<')
            res.push_back(0);
    }
    if (!(s[n - 2] == '<' && s[n - 1] == '>'))
        res.push_back(tmp[n - 1]);

    ll ans = accumulate(res.begin(), res.end(), 0LL);
    cout << ans << '\n';
    return 0;
}

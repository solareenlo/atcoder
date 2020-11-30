#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

template<class T> T comb(T n, T r) {
    if (r * 2 > n) r = n - r;
    T dividend = 1;
    T divisor = 1;
    for (T i = 1; i <= r; i++ ) {
        dividend *= (n - i + 1);
        divisor *= i;
    }
    return dividend / divisor;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> s(n);
    REP(i, n) cin >> s[i];
    REP(i, n) sort(s[i].begin(), s[i].end());
    sort(s.begin(), s.end());

    ll ans = 0;
    ll count = 0;
    vector<ll> num;
    REP(i, n - 1) {
        if (s[i] == s[i + 1]) count++;
        else {
            num.push_back(count);
            count = 0;
        }
    }

    if (count != 0) num.push_back(count);

    REP(i, num.size())
        if (num[i] != 0) ans += comb(num[i] + 1, (ll)2);

    cout << ans << '\n';
    return 0;
}

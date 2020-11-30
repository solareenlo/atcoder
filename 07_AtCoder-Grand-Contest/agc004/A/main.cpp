#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<ll> l(3);
    REP(i, 3) cin >> l[i];
    sort(l.begin(), l.end());

    vector<int> rem(3);
    REP(i, 3) rem[i] = l[i] % 2;
    int sumRem = accumulate(rem.begin(), rem.end(), 0);

    if (sumRem == 3) cout << l[0] * l[1] << '\n';
    else cout << 0 << '\n';
    return 0;
}

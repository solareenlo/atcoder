#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

ll MARCH[5];
int P[10] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
int Q[10] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
int R[10] = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    ll m, a, r, c, h;
    m = a = r = c = h =0;
    REP(i, n) {
        string s;
        cin >> s;
        if (s[0] == 'M') m++;
        if (s[0] == 'A') a++;
        if (s[0] == 'R') r++;
        if (s[0] == 'C') c++;
        if (s[0] == 'H') h++;
    }

    MARCH[0] = m;
    MARCH[1] = a;
    MARCH[2] = r;
    MARCH[3] = c;
    MARCH[4] = h;

    ll ans = 0;
    REP(i, 10)
        ans += MARCH[P[i]] * MARCH[Q[i]] * MARCH[R[i]];

    cout << ans << '\n';
    return 0;
}

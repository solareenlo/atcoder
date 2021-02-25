#include <bits/stdc++.h>
#define REP(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n; cin >> n;
    string s[n+1];
    if (n<4) cout << -1 << '\n';
    else {
        REP(i, n) REP(j, n) s[i].push_back('.');
        if (n%2) s[0][0] = '#';
        REP(i, n/2) s[i+1][i] = s[i][i+1] = '#';
        REP(i, n) cout << s[i] << '\n';
    }
    return 0;
}

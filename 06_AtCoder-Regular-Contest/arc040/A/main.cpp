#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> s(n);
    REP(i, n) cin >> s[i];

    int cntR = 0;
    int cntB = 0;
    REP(i, n) REP(j, n) {
        if (s[i][j] == 'R') cntR++;
        if (s[i][j] == 'B') cntB++;
    }

    if (cntR == cntB) cout << "DRAW" << '\n';
    else if (cntR > cntB) cout << "TAKAHASHI" << '\n';
    else cout << "AOKI" << '\n';
    return 0;
}

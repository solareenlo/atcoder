#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    int cntR = 0;
    int cntB = 0;
    REP(i, n) {
        if (s[i] == 'R') cntR++;
        if (s[i] == 'B') cntB++;
    }

    if (cntR > cntB) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    int cntA = 0;
    int cntB = 0;
    int cntC = 0;
    REP(i, n) {
        if (s[i] == 'a') cntA++;
        if (s[i] == 'b') cntB++;
        if (s[i] == 'c') cntC++;
    }

    if (n == 1) cout << "YES" << '\n';
    else if (n == 2) {
        if (s[0] != s[1]) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    } else if (cntA == 0 || cntB == 0 || cntC == 0) cout << "NO" << '\n';
    else if (abs(cntA - cntB) <= 1 && abs(cntA - cntC) <= 1 && abs(cntB - cntC) <= 1)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

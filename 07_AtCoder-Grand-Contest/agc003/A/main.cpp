#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;

    bool N, W, S, E;
    N = W = S = E = false;
    REP(i, s.size()) {
        if (s[i] == 'N') N = true;
        if (s[i] == 'W') W = true;
        if (s[i] == 'S') S = true;
        if (s[i] == 'E') E = true;
    }

    if (N^S || W^E) cout << "No" << '\n';
    else cout << "Yes" << '\n';
    return 0;
}

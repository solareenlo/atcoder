#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    REP(i, h) cin >> s[i];

    int cnt = 0;
    REP(i, h) REP(j, w) {
        if (s[i][j] == '#')
            cnt++;
    }

    if (cnt == h + w - 1) cout << "Possible" << '\n';
    else cout << "Impossible" << '\n';
    return 0;
}

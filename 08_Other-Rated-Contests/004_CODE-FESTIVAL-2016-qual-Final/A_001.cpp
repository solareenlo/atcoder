#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int h, w; cin >> h >> w;
    int row, col;
    REP(i, h) REP(j, w) {
        string s; cin >> s;
        if (s == "snuke") {
            row = i;
            col = j;
        }
    }

    char A = 'A' + col;
    cout << A << row + 1 << '\n';
    return 0;
}

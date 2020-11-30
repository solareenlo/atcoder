#include <algorithm>
#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;

    vector<vector<int> > m(h, vector<int>(w, 0));
    REP(i, h) REP(j, w) {
        char c; cin >> c;
        if (c == '.') m[i][j] = 0;
        if (c == '#') m[i][j] = 1;
    }

    vector<vector<int> > l(h, vector<int>(w, 0));
    copy(m.begin(), m.end(), l.begin());

    REP(i, h) {
        int count = 0;
        REP(j, w)
            if (m[i][j] == 0) count++;
        if (count == w)
            REP(j, w) m[i][j] = -1;
    }

    REP(j, w) {
        int count = 0;
        REP(i, h)
            if (l[i][j] == 0) count++;
        if (count == h)
            REP(i, h) l[i][j] = -1;
    }

    REP(i, h) {
        REP(j, w) {
            if (m[i][j] != -1 && l[i][j] != -1) {
                if (l[i][j] == 0) cout << '.';
                if (l[i][j] == 1) cout << '#';
            }
        }
        int count = 0;
        REP(j, w)
            if (m[i][j] == -1) count++;
        if (count != w) cout << '\n';
    }
    return 0;
}

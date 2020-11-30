#include <iostream>
#include <vector>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    vector<string> str(h);
    REP(i, h) cin >> str[i];

    vector<vector<int> > m(h, vector<int>(w, -1));
    REP(i, h) REP(j, w)
        if (str[i][j] == '.') m[i][j] = 0;

    REP(i, h) REP(j, w) {
        if (str[i][j] == '#') {
            for (int x = -1; x <= 1; x++) {
                if (i + x >= 0 && i + x < h) {
                    for (int y = -1; y <= 1; y++) {
                        if (j + y >= 0 && j + y < w) {
                            if (str[i + x][j + y] == '#') continue ;
                            else m[i + x][j + y]++;
                        }
                    }
                }
            }
        }
    }

    REP(i, h) {
        REP(j , w) {
            if (m[i][j] == -1) cout << '#';
            else cout << m[i][j];
        }
        cout << '\n';
    }
    return 0;
}

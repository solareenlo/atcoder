#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {-1,0, 1,  0};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    vector<vector<bool> > s(h, vector<bool>(w, false));
    REP(i, h) REP(j, w) {
        char tmp;
        cin >> tmp;
        if (tmp == '#')
            s[i][j] = true;
    }

    bool ans = true;
    REP(i, h) REP(j, w) {
        if (s[i][j]) {
            int sum = 0;
            REP(k, 4) {
                if (i + dx[k] >= 0 && i + dx[k] < h)
                    if (j + dy[k] >= 0 && j + dy[k] < w)
                        if ((s[i + dx[k]][j + dy[k]]))
                            sum++;
            }
            if (sum == 0) ans = false;
        }
    }

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

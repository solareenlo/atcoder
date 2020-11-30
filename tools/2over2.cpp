// 縦と横をチェックする
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
const int dx[4] = {0, 1, 0,-1};
const int dy[4] = {-1,0, 1, 0};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > card(n, vector<int>(m, 1));

    REP(i, n) REP(j, m) {
        REP(k, 4) {
            if (i + dx[k] >= 0 && i + dx[k] < n)
                if (j + dy[k] >= 0 && j + dy[k] < m)
                    card[i][j] *= -1;
        }
    }
    REP(i, n) {
        REP(j, m) {
        cout << setw(2) << card[i][j];
        }
        cout << '\n';
    }
    return 0;
}

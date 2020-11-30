#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<vector<int> > c(3, vector<int>(3, 0));
    REP(i, 3) REP(j, 3) {
        cin >> c[i][j];
    }

    bool ans = true;
    REP(j, 3 - 1) REP(i, 3 - 1)
        if ((c[i][j] - c[i][j+1]) != (c[i+1][j] - c[i+1][j+1]))
            ans = false;

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

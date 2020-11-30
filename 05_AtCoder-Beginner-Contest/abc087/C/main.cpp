#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > a(2, vector<int>(n, 0));
    REP(i, 2) REP(j, n) cin >> a[i][j];

    int maxi = 0;
    REP(i, n) {
        int sum = 0;
        REP(j, n - i) // 1行目の前からの合計
            sum += a[0][j];
        REP(j, i + 1) // 2行目の後ろからの合計
            sum += a[1][n - 1 - j];
        maxi = max(maxi, sum);
    }

    cout << maxi << '\n';
    return 0;
}

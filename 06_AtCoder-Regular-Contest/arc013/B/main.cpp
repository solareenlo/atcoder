#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > b(n, vector<int>(3, 0));
    REP(i, n)
        cin >> b[i][0] >> b[i][1] >> b[i][2];

    REP(i, n)
        sort(b[i].begin(), b[i].end());

    int maxN = 0;
    int maxM = 0;
    int maxL = 0;
    REP(i, n) {
        maxN = max(maxN, b[i][0]);
        maxM = max(maxM, b[i][1]);
        maxL = max(maxL, b[i][2]);
    }

    cout << maxN * maxM * maxL << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<double> > p(n, vector<double>(5));
    REP(i, n) REP(j, 5) cin >> p[i][j];

    double maxi = 0;
    REP(i, n) {
        double sum = 0;
        REP(j, 4) sum += p[i][j];
        sum += p[i][4] * 110 / 900;
        maxi = max(maxi, sum);
    }

    printf("%.10f\n", maxi);
    return 0;
}

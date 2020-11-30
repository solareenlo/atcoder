#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<double> x(n), y(n);
    REP(i, n) cin >> x[i] >> y[i];

    double maxi = 0;
    REP(i, n) {
        for (int j = i + 1; j < n; j++) {
            double dist = hypot((x[i] - x[j]), (y[i] - y[j]));
            maxi = max(maxi, dist);
        }
    }

    printf("%.10f\n", maxi);
    return 0;
}

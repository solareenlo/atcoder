#include <iostream>
#include <cmath>
#include <stdio.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int x[n], y[n];
    REP(i, n)
        cin >> x[i] >> y[i];

    double maxi = 0.0;
    REP(i, n) {
        for(int j = i + 1; j < n; j++) {
            double dist = hypot(x[i] - x[j], y[i] - y[j]);
            if (dist > maxi)
                maxi = dist;
        }
    }

    printf("%.6f\n", maxi);
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    double ans = 0.0;
    REP(i, n) {
        int cnt = 0;
        while (k > (i + 1) * pow(2, cnt))
            cnt++;
        ans += (1.0 / n) * pow(0.5, cnt);
    }

    printf("%.10f\n", ans);
    return 0;
}

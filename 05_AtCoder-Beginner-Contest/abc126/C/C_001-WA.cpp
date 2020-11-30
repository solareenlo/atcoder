#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int cnt2 = 0;
    int tmp = 1;
    while (tmp <= 10) {
        tmp *= 2;
        cnt2++;
    }

    double ans = 0.0;
    REP(i, min(n, k - 1)) {
        REP(j, cnt2) {
            int tmp = (i + 1) * pow(2, j + 1);
            if (tmp >= k) {
                ans += (1.0 / n) * pow(0.5, j + 1);
                break ;
            }
        }
    }

    if (n >= k)
        ans += (1.0 / n) * (n - k + 1);

    printf("%.10f\n", ans);
    return 0;
}

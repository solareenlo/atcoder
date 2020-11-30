#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

bool calLeapYear(int y) {
    bool ans = false;
    if (y % 4 == 0) ans = true;
    if (y % 100 == 0) ans = false;
    if (y % 400 == 0) ans = true;
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);

    int dMax[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = y; i <= 3000; i++) {
        int mMin;
        if (i == y) mMin = m;
        else mMin = 1;
        for (int j = mMin; j <= 12; j++) {
            int dMin;
            if (j == m) dMin = d;
            else dMin = 1;
            if (j == 2) {
                bool leap = calLeapYear(y);
                if (leap) dMax[2] = 29;
            }
            for (int k = dMin; k <= dMax[j]; k++) {
                if (((double)i / (double)j) / (double)k == (i / j) / k) {
                    printf("%02d/%02d/%02d\n", i, j, k);
                    return 0;
                }
            }
        }
    }
    return 0;
}

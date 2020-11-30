#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    double n;
    cin >> n;
    double ans = (9.0 / 5.0 * n) + 32;
    printf("%.10f\n", ans);
    return 0;
}

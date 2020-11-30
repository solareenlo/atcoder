#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    double h, bmi;
    cin >> h >> bmi;
    h /= 100;

    double w = bmi * pow(h, 2);
    printf("%.10f\n", w);
    return 0;
}

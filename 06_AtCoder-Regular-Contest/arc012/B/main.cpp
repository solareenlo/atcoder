#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    double va, vb, l;
    cin >> n >> va >> vb >> l;

    REP(i, n) {
        double t = l / va;
        l = vb * t;
    }

    printf("%.10f\n", l);
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    long double a, b;;
    cin >> n >> a >> b;

    vector<long double> s(n);
    REP(i, n) cin >> s[i];
    sort(s.begin(), s.end());

    if (s[n - 1] == s[0]) cout << -1 << '\n';
    else {
        long double p = b / (s[n - 1] - s[0]);

        long double sum = 0;
        REP(i, n) sum += s[i];
        long double q = (a * (long double)n - sum * p) / (long double)n;

        printf("%.10Lf %.10Lf\n", p, q);
    }
    return 0;
}

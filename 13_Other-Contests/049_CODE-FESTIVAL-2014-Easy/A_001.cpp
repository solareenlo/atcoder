#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n) cin >> a[i];

    ll sum = 0;
    REP(i, n - 1) sum += a[i + 1] - a[i];

    double ave = (double)sum / (double)(n - 1);

    printf("%.10f\n", ave);
    return 0;
}

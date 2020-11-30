#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int rem = (n - 1) % (k - 1);
    int div = (n - 1) / (k - 1);

    if (rem) cout << div + 1 << '\n';
    else cout << div << '\n';
    return 0;
}

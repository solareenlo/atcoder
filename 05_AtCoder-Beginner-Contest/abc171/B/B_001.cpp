#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    REP(i, n) cin >> p[i];
    sort(p.begin(), p.end());

    int sum = 0;
    REP(i, k) sum += p[i];

    cout << sum << '\n';
    return 0;
}

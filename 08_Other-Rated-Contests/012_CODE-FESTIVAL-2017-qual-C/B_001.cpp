#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    vector<int> a(n);
    REP(i, n) cin >> a[i];

    int cntE = 0;
    REP(i, n) if (a[i] % 2 == 0) cntE++;

    cout << pow(3, n) - pow(2, cntE) << '\n';
    return 0;
}

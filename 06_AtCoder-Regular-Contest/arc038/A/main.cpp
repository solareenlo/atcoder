#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;
    REP(i, n)
        if (i % 2 == 0) sum += a[i];

    cout << sum << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> m(n);
    REP(i, n) cin >> m[i];

    int sum = 0;
    REP(i, n)
        if (m[i] < 80)
            sum += 80 - m[i];

    cout << sum << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;

    vector<int> r(n);
    REP(i, n) {
        int tmp; cin >> tmp;
        r[i] = tmp - 1;
    }

    int cnt = 0;
    REP(i, n)
        if (i == r[r[i]]) cnt++;

    cout << cnt / 2 << '\n';
    return 0;
}

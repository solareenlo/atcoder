#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    map<int, int> ab;
    REP(i, 6) {
        int tmp;
        cin >> tmp;
        ab[tmp]++;
    }

    int maxi = 0;
    for (auto x : ab) {
        maxi = max(maxi, x.second);
    }

    if (maxi == 2) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int ans = 0;
    REP(i, 5) {
        int tmp;
        cin >> tmp;
        if (tmp == 0) ans = i + 1;
    }
    cout << ans << '\n';
    return 0;
}

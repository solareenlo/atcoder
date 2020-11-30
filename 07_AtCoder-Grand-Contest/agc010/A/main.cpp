#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int cnt = 0;
    REP(i, n) {
        int tmp;
        cin >> tmp;
        if (tmp % 2) cnt++;
    }

    if (cnt % 2) cout << "NO" << '\n';
    else cout << "YES" << '\n';
    return 0;
}

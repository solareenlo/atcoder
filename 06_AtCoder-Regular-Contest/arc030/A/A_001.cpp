#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    if (n / 2 >= k) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

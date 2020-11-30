#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    cout << min(a, b) << ' ' << max(0, a + b - n) << '\n';
    // cout << min(a, b) << ' ' << min(a - (n - b), b - (n -a)) << '\n';
    return 0;
}

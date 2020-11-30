#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    if (k == 1) cout << 0 << '\n';
    else if (n == k) cout << 0 << '\n';
    else cout << n - k << '\n';
    return 0;
}

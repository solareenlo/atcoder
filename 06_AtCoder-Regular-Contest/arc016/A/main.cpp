#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i != m) {
            cout << i << '\n';
            break ;
        }
    }
    return 0;
}

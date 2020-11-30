#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    if (abs(a - b) % 2) cout << "Borys" << '\n';
    else cout << "Alice" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b; cin >> a >> b;
    if (a + b == 15) cout << '+' << '\n';
    else if (a * b == 15) cout << '*' << '\n';
    else cout << 'x' << '\n';
    return 0;
}

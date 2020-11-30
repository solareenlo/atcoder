#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    if (abs(a) == abs(b)) cout << "Draw" << '\n';
    else if (abs(a) < abs(b)) cout << "Ant" << '\n';
    else cout << "Bug" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int rem = n % (a + b);
    if (rem == 0) cout << "Bug" << '\n';
    else if (rem <= a) cout << "Ant" << '\n';
    else cout << "Bug" << '\n';
    return 0;
}

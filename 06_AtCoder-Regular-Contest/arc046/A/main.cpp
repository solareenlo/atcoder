#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    int div = n / 9;
    int rem = n % 9;
    if (rem) div++;
    else rem = 9;
    REP(i, div) cout << rem;
    cout << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    cout << '1';
    REP(i, n - 1) cout << '0';
    cout << '7';
    cout << '\n';
    return 0;
}

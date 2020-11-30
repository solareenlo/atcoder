#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    int b; cin >> b;
    REP(i, n - 1) {
        int a; cin >> a;
        b ^= a;
    }
    if(!b) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

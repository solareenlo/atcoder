#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    bool ans = true;
    REP(i, n) {
        int t;
        cin >> t;
        int x, y;
        cin >> x >> y;
        if (t % 2 != (x + y) % 2) {
            ans = false;
            break ;
        }
        if (t < (x + y)) {
            ans = false;
            break ;
        }
    }

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

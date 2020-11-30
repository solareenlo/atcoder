#include <iostream>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    bool ans = false;
    REP(i, 26) REP(j, 15) {
        if (i * 4 + j * 7 == n) {
            ans = true;
            break ;
        }
    }

    if (ans) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

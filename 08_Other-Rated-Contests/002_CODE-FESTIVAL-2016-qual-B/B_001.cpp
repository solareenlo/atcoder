#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;

    int cntA = 0;
    int cntB = 0;
    REP(i, n) {
        if (s[i] == 'a') {
            if (cntA + cntB < a + b) {
                cout << "Yes" << '\n';
                cntA++;
            } else cout << "No" << '\n';
        } else if (s[i] == 'b') {
            if (cntA + cntB < a + b) {
                if (cntB < b) {
                    cout << "Yes" << '\n';
                    cntB++;
                } else cout << "No" << '\n';
            } else cout << "No" << '\n';
        } else cout << "No" << '\n';
    }
    return 0;
}

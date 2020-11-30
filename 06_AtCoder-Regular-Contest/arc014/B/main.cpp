#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    map<string, bool> str;
    REP(i, n) {
        string w;
        cin >> w;
        if (i != 0) {
            if (w[0] != s[s.size() - 1] || str[w] == true) {
                if (i % 2) cout << "WIN" << '\n';
                else cout << "LOSE" << '\n';
                return 0;
            }
        }
        str[w] = true;
        s = w;
    }
    cout << "DRAW" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    map<string, bool> str;
    string s;
    REP(i, n) {
        string tmp;
        cin >> tmp;
        if (i != 0) {
            if (tmp[0] != s[s.size() - 1] || str[tmp] == true) {
                if (i % 2) cout << "WIN" << '\n';
                else cout << "LOSE" << '\n';
                return 0;
            }
        }
        str[tmp] = true;
        s = tmp;
    }
    cout << "DRAW" << '\n';
    return 0;
}

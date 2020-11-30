#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> s(n);
    REP(i, n) cin >> s[i];

    if (n == 1) cout << "DRAW" << '\n';
    else {
        int index1 = 1000;
        int win1 = 2;
        map<string, bool> str;
        REP(i, n) {
            if (str[s[i]] == false) str[s[i]] = true;
            else {
                if (i % 2 == 0) win1 = 0;
                else win1 = 1;
                index1 = i;
                break ;
            }
        }

        int index2 = 1000;
        int win2 = 2;
        REP(i, n - 1) {
            if (i % 2 == 0) {
                if (s[i][s[i].size() - 1] != s[i + 1][0]) {
                    win2 = 1;
                    index2 = i + 1;
                    break ;
                }
            } else {
                if (s[i][s[i].size() - 1] != s[i + 1][0]) {
                    win2 = 0;
                    index2 = i + 1;
                    break ;
                }
            }
        }
        // cout << index1 << ' ' << win1 << '\n';
        // cout << index2 << ' ' << win2 << '\n';

        if (index1 < index2) {
            if (win1 == 0) cout << "LOSE" << '\n';
            else if (win1 == 1) cout << "WIN" << '\n';
            else cout << "DRAW" << '\n';
        } else {
            if (win2 == 0) cout << "LOSE" << '\n';
            else if (win2 == 1) cout << "WIN" << '\n';
            else cout << "DRAW" << '\n';
        }
    }
    return 0;
}

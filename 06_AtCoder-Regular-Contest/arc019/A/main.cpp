#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    REP(i, s.size()) {
        if (s[i] == 'O') cout << 0;
        else if (s[i] == 'D') cout << 0;
        else if (s[i] == 'I') cout << 1;
        else if (s[i] == 'Z') cout << 2;
        else if (s[i] == 'S') cout << 5;
        else if (s[i] == 'B') cout << 8;
        else cout << s[i];
    }
    cout << '\n';
    return 0;
}

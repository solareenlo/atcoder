#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    getline(cin, s);
    int n = s.size();

    REP(i, n - 1) {
        if (s[i] != ' ') cout << s[i];
        else if (s[i] == ' ' && s[i + 1] == ' ') continue ;
        else cout << ',';
    }
    cout << s[n - 1] << '\n';
    return 0;
}

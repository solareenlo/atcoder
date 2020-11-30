#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    char x;
    cin >> x;
    string s;
    cin >> s;

    REP(i, s.size())
        if (s[i] != x)
            cout << s[i];
    cout << '\n';
    return 0;
}

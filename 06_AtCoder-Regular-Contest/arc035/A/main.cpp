#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;

    int num = s.size();
    REP(i, num)
        if (s[i] == '*')
            s[i] = s[num - 1 - i];

    REP(i, num)
        if (s[i] == '*')
            s[i] = 'a';

    string t;
    t = s;
    reverse(t.begin(), t.end());

    if (s == t) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

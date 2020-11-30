#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    REP(i, s.size() + 1) {
        if (i == a) cout << "\"";
        if (i == b) cout << "\"";
        if (i == c) cout << "\"";
        if (i == d) cout << "\"";
        if (i != s.size()) cout << s[i];
    }

    cout << '\n';
    return 0;
}

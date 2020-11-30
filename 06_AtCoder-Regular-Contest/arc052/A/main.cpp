#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    REP(i, s.size())
        if (isdigit(s[i])) cout << s[i];

    cout << '\n';
    return 0;
}

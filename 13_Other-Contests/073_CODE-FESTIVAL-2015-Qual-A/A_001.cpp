#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    REP(i, n) {
        if (s[i] != '4') cout << s[i];
        else cout << 5;
    }
    cout << '\n';
    return 0;
}

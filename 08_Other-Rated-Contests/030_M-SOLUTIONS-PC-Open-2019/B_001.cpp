#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    int cnt = 0;
    REP(i, n) if (s[i] == 'o') cnt++;

    if (15 - n + cnt >= 8) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

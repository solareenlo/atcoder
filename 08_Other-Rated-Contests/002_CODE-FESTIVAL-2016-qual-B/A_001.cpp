#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();
    string t = "CODEFESTIVAL2016";

    int cnt = 0;
    REP(i, n)
        if (s[i] != t[i]) cnt++;

    cout << cnt << '\n';
    return 0;
}

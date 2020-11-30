#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int cnt = 0;
    REP(i, s.size() - 1)
        if (s[i] != s[i + 1]) cnt++;

    cout << cnt << '\n';
    return 0;
}

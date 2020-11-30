#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int cnt = 0;
    REP(i, s.size()) {
        if (i % 2 == 0 && s[i] == '1') cnt++;
        if (i % 2 == 1 && s[i] == '0') cnt++;
    }

    int cnt2 = 0;
    REP(i, s.size()) {
        if (i % 2 == 0 && s[i] == '0') cnt2++;
        if (i % 2 == 1 && s[i] == '1') cnt2++;
    }

    cout << min(cnt, cnt2) << '\n';
    return 0;
}

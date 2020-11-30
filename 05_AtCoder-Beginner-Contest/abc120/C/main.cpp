#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int cnt0 = 0;
    int cnt1 = 0;
    REP(i, s.size()) {
        if (s[i] == '0') cnt0++;
        else cnt1++;
    }

    cout << min(cnt0, cnt1) * 2 << '\n';
    return 0;
}

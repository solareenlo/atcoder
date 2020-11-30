#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    int n = s.size();

    int w;
    cin >> w;

    REP(i, n) {
        if (i != 0 && i % w == 0) cout << '\n';
        cout << s[i];
    }
    cout << '\n';
    return 0;
}

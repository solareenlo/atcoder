#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string tmp;
    getline(cin, tmp);

    string ans;
    REP(i, tmp.size()) {
        if (tmp[i] == 'L') ans += "< ";
        if (tmp[i] == 'R') ans += "> ";
        if (tmp[i] == 'A') ans += "A ";
    }

    ans.erase(ans.end() - 1);
    cout << ans << '\n';
    return 0;
}

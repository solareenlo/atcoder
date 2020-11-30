#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int w; cin >> w;

    string ans;
    for (int i = 0; i < s.size(); i += w)
        ans.push_back(s[i]);

    cout << ans << '\n';
    return 0;
}

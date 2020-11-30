#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    int ans = 0;
    if (n != m) ans = -1;
    else {
        vector<int> tmp;
        REP(i, n) {
            string tmp1 = s.substr(0, i);
            string tmp2 = s.substr(i, n - i);
            if (tmp2 + tmp1 == t) {
                tmp.push_back(i);
            }
        }
        sort(tmp.begin(), tmp.end());
        if (tmp.size() == 0) ans = -1;
        else ans = tmp[0];
    }

    cout << ans << '\n';
    return 0;
}

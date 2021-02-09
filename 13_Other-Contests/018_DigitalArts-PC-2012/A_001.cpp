#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<string> s;
    string tmp, tmp2;
    getline(cin, tmp);
    stringstream ss{tmp};
    while (getline(ss, tmp2, ' ')) {
        s.push_back(tmp2);
    }
    int n = s.size();

    int N;
    cin >> N;
    vector<string> t(N);
    REP(i, N) cin >> t[i];

    vector<string> ans(n);
    REP(i, n) {
        bool con = false;
        REP(j, N) {
            if (s[i] == t[j]) {
                con = true;
                break ;
            } else if (s[i].size() == t[j].size()) {
                bool ok = true;
                REP(k, (int)s[i].size())
                    if (t[j][k] != '*')
                        if (s[i][k] != t[j][k])
                            ok = false;
                if (ok) {
                    con = true;
                    break ;
                }
            }
        }
        if (con)
            REP(k, (int)s[i].size()) ans[i].push_back('*');
        else ans[i] = s[i];
    }

    REP(i, n) {
        cout << ans[i];
        if (i != n - 1)
            cout << ' ';
    }
    cout << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> ans(n, 0);

    REP(z, 2) {
        int count = 0;
        REP(i, n) {
            if (s[i] == 'R') count++;
            else {
                ans[i] += count / 2;
                ans[i - 1] += (count + 1) / 2;
                count = 0;
            }
        }
        reverse(ans.begin(), ans.end());
        reverse(s.begin(), s.end());
        REP(i, n) {
            if (s[i] == 'R') s[i] = 'L';
            else s[i] = 'R';
        }
    }

    REP(i, n) {
        cout << ans[i];
        if (i != n - 1) cout << ' ';
    }
    cout << '\n';
    return 0;
}

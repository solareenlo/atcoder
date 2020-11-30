#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;
    vector<string> s(n);

    REP(i, n) {
        string tmp;
        cin >> tmp;
        reverse(tmp.begin(), tmp.end());
        s[i] = tmp;
    }

    sort(s.begin(), s.end());

    REP(i, n)
        reverse(s[i].begin(), s[i].end());

    REP(i, n)
        cout << s[i] << '\n';
    return 0;
}

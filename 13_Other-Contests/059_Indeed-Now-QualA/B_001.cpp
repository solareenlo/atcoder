#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> s(n);
    REP(i, n) cin >> s[i];
    REP(i, n) sort(s[i].begin(), s[i].end());

    string now = "indeednow";
    sort(now.begin(), now.end());

    REP(i, n) {
        if (s[i] == now) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}

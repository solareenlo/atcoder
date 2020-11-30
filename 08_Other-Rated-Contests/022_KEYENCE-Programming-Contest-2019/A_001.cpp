#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<char> n(4);
    REP(i, 4) cin >> n[i];
    sort(n.begin(), n.end());

    string s;
    REP(i, 4) s.push_back(n[i]);

    if (stoi(s) == 1479) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}

#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    char c = s[k - 1];

    REP(i, n)
        if (s[i] != c) cout << '*';
        else cout << s[i];
    cout << '\n';
    return 0;
}

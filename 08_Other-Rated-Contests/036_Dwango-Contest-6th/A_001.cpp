#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    int n; cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    REP(i, n) cin >> s[i] >> t[i];
    string x; cin >> x;

    int index = 0;
    REP(i, n) if (x == s[i]) index = i;

    int sum = 0;
    for (int i = index + 1; i < n; i++)
        sum += t[i];

    cout << sum << '\n';
    return 0;
}

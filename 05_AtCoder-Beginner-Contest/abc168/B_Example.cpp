#include "bits/stdc++.h"
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int k;
    string s;
    cin >> k >> s;

    if (s.size() <= k)
        cout << s << '\n';
    else {
        string ans = s.substr(0, k);
        ans += "...";
        cout << ans << '\n';
    }
    return 0;
}

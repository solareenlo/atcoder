#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<string> s(15);

    REP(i, 15) cin >> s[i];
    sort(s.begin(), s.end());

    cout << s[6] << '\n';
    return 0;
}

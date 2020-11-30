#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s; cin >> s;
    int n = s.size();

    if (n == 2) cout << s << '\n';
    if (n == 3) {
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}

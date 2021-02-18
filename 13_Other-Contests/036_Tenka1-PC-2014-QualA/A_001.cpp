#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    vector<string> s(1000);
    for (int i = 1; i <= 1000; i++)
        s[i - 1] = to_string(i);

    sort(s.begin(), s.end());

    REP(i, 1000)
        cout << s[i] << '\n';
    return 0;
}

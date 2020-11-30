#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;

    int num = s.size();

    int ans;
    ans = 9 * (num - 1);
    if(s[0] != 0) ans += s[0] - '0' - 1;

    int cnt = 0;
    REP(i, num) if (s[i] == '9') cnt++;
    if (cnt == num) ans = 9 * num;

    if (num == 1) ans = stoi(s);

    string t = s.substr(1, s.size());
    cnt = 0;
    REP(i, num - 1) if (t[i] == '9') cnt++;
    if (cnt == num - 1) {
        ans = 9 * (num - 1);
        ans += s[0] - '0';
    }

    cout << ans << '\n';
    return 0;
}

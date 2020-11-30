#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;
    ll ans = 0;
    REP(i, n) {
        if (s[i] == 'W') {
            ans += i - cnt;
            cnt++;
        }
    }

    cout << ans << '\n';
    return 0;
}

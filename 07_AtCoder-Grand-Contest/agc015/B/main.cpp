#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(false);

    string s;
    cin >> s;
    int n = s.size();

    ll cnt = 0;
    REP(i, n) {
        if (s[i] == 'U') {
            cnt += n - 1 - i;
            cnt += i * 2;
        } else if (s[i] == 'D') {
            cnt += i;
            cnt += (n - 1 - i) * 2;
        }
    }

    cout << cnt << '\n';
    return 0;
}

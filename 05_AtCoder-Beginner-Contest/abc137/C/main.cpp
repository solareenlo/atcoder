#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    map<string, int> m;

    ll ans = 0;
    while (n--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        ans += m[s]++;
    }

    cout << ans << '\n';
    return 0;
}

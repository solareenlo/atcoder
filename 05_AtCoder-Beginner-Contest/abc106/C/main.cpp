#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    ll k;
    cin >> k;

    int n = s.size();
    int ans = 1;
    if (n >= k) {
        REP(i, k) {
            if (s[i] != '1') {
                ans = s[i] - '0';
                break ;
            }
        }
    } else {
        REP(i, n) {
            if (s[i] != '1') {
                ans = s[i] - '0';
                break ;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
